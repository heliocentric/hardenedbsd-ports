--- devices/gdevvglb.c.orig	2015-03-30 08:21:24 UTC
+++ devices/gdevvglb.c
@@ -368,12 +368,3 @@ vgalib_put_params(gx_device * dev, gs_pa
     }
     return 0;
 }
-
-#ifdef GS_DEVS_SHARED
-extern void gs_lib_register_device(const gx_device *dev);
-void
-gs_shared_init(void)
-{
-  gs_lib_register_device(&gs_vgalib_device);
-}
-#endif
