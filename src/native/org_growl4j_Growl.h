/*
 * growl4j, the OpenSource Java Solution for using Growl.
 * Maintained by the Jitsi community (http://jitsi.org).
 *
 * Distributable under LGPL license. See terms of license at gnu.org.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_growl4j_Growl */

#ifndef _Included_org_growl4j_Growl
#define _Included_org_growl4j_Growl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_growl4j_Growl
 * Method:    isGrowlRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_growl4j_Growl_isGrowlRunning
  (JNIEnv *, jclass);

/*
 * Class:     org_growl4j_Growl
 * Method:    getAppToFront
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_getAppToFront
  (JNIEnv *, jobject);

/*
 * Class:     org_growl4j_Growl
 * Method:    showGrowlMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BJ)V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_showGrowlMessage
  (JNIEnv *, jobject, jstring, jstring, jstring, jbyteArray, jlong);

/*
 * Class:     org_growl4j_Growl
 * Method:    registerWithGrowlDaemon
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_registerWithGrowlDaemon
  (JNIEnv *, jobject);

/*
 * Class:     org_growl4j_Growl
 * Method:    doFinalCleanUp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_doFinalCleanUp
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
