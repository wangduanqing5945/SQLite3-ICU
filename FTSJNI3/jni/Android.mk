
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS += -llog
LOCAL_LDLIBS += -lz
LOCAL_LDLIBS += -L./jni/lib -lsqlite

LOCAL_MODULE := FTSDatabase
LOCAL_SRC_FILES := com_tencent_mobileqq_persistence_FTSDatatbaseDao.c utils.c qqcompress.c

include $(BUILD_SHARED_LIBRARY)
