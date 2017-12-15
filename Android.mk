# Copyright 2013 The Android Open Source Project

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= main.cpp \
    strongpoint.cpp \
    sortedvector.cpp \

LOCAL_SHARED_LIBRARIES:= \
    libcutils \
    libutils  \
    libmedia \

LOCAL_MODULE:= libutils_test

include $(BUILD_EXECUTABLE)
