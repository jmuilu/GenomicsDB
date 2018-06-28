/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_genomicsdb_GenomicsDBUtilsJni */

#ifndef _Included_com_intel_genomicsdb_GenomicsDBUtilsJni
#define _Included_com_intel_genomicsdb_GenomicsDBUtilsJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_genomicsdb_GenomicsDBUtilsJni
 * Method:    jniCreateTileDBWorkspace
 * Signature: (Ljava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_com_intel_genomicsdb_GenomicsDBUtilsJni_jniCreateTileDBWorkspace
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_intel_genomicsdb_GenomicsDBUtilsJni
 * Method:    jniIsTileDBArray
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_genomicsdb_GenomicsDBUtilsJni_jniIsTileDBArray
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_intel_genomicsdb_GenomicsDBUtilsJni
 * Method:    jniListTileDBArrays
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_intel_genomicsdb_GenomicsDBUtilsJni_jniListTileDBArrays
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_intel_genomicsdb_GenomicsDBUtilsJni
 * Method:    jniWriteToFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_genomicsdb_GenomicsDBUtilsJni_jniWriteToFile
  (JNIEnv *, jclass, jstring, jstring, jlong);

/*
 * Class:     com_intel_genomicsdb_GenomicsDBUtilsJni
 * Method:    jniMoveFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_intel_genomicsdb_GenomicsDBUtilsJni_jniMoveFile
  (JNIEnv *, jclass, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif