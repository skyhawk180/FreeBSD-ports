--- components/url_matcher/url_matcher_factory.cc.orig	2016-05-11 19:02:20 UTC
+++ components/url_matcher/url_matcher_factory.cc
@@ -15,7 +15,11 @@
 #include "base/values.h"
 #include "components/url_matcher/url_matcher_constants.h"
 #include "components/url_matcher/url_matcher_helpers.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 namespace url_matcher {
 
