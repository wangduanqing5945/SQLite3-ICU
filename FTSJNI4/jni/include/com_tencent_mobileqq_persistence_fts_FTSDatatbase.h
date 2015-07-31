/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tencent_mobileqq_persistence_fts_FTSDatatbase */

#ifndef _Included_com_tencent_mobileqq_persistence_fts_FTSDatatbase
#define _Included_com_tencent_mobileqq_persistence_fts_FTSDatatbase
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    initFTS
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_initFTS
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    queryFTSEntities
 * Signature: (Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_queryFTSEntities
  (JNIEnv *, jobject, jstring, jobjectArray, jstring);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    insertFTS
 * Signature: (Lcom/tencent/mobileqq/persistence/fts/FTSEntity;)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_insertFTS
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    deleteFTS
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_deleteFTS
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    insertFTSWithTrans
 * Signature: (Ljava/util/ArrayList;)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_insertFTSWithTrans
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    deleteFTSWithTrans
 * Signature: (Ljava/util/ArrayList;)I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_deleteFTSWithTrans
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_tencent_mobileqq_persistence_fts_FTSDatatbase
 * Method:    closeFTS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tencent_mobileqq_persistence_fts_FTSDatatbase_closeFTS
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
