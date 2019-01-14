/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "org_zeromq_czmq_Zchunk.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1new (JNIEnv *env, jclass c, jbyteArray data, jlong size)
{
    jbyte *data_ = (byte *) (*env)->GetByteArrayElements (env, data, 0);
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zchunk_new (data_, (size_t) size);
    (*env)->ReleaseByteArrayElements (env, data, (jbyte *) data_, 0);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zchunk__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zchunk_destroy ((zchunk_t **) &self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zchunk__1_1resize (JNIEnv *env, jclass c, jlong self, jlong size)
{
    zchunk_resize ((zchunk_t *) (intptr_t) self, (size_t) size);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1size (JNIEnv *env, jclass c, jlong self)
{
    jlong size_ = (jlong) zchunk_size ((zchunk_t *) (intptr_t) self);
    return size_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1maxSize (JNIEnv *env, jclass c, jlong self)
{
    jlong max_size_ = (jlong) zchunk_max_size ((zchunk_t *) (intptr_t) self);
    return max_size_;
}

JNIEXPORT jbyteArray JNICALL
Java_org_zeromq_czmq_Zchunk__1_1data (JNIEnv *env, jclass c, jlong self)
{
    jbyte *data_ = (jbyte *) zchunk_data ((zchunk_t *) (intptr_t) self);
    jint return_size_ = (jint) zchunk_size ((zchunk_t *) (intptr_t) self);
    jbyteArray return_data_ = (*env)->NewByteArray (env, return_size_);
    (*env)->SetByteArrayRegion (env, return_data_, 0, return_size_, (jbyte *) data_);
    return return_data_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1set (JNIEnv *env, jclass c, jlong self, jbyteArray data, jlong size)
{
    jbyte *data_ = (byte *) (*env)->GetByteArrayElements (env, data, 0);
    jlong set_ = (jlong) zchunk_set ((zchunk_t *) (intptr_t) self, data_, (size_t) size);
    (*env)->ReleaseByteArrayElements (env, data, (jbyte *) data_, 0);
    return set_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1fill (JNIEnv *env, jclass c, jlong self, jbyte filler, jlong size)
{
    jlong fill_ = (jlong) zchunk_fill ((zchunk_t *) (intptr_t) self, (byte) filler, (size_t) size);
    return fill_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1append (JNIEnv *env, jclass c, jlong self, jbyteArray data, jlong size)
{
    jbyte *data_ = (byte *) (*env)->GetByteArrayElements (env, data, 0);
    jlong append_ = (jlong) zchunk_append ((zchunk_t *) (intptr_t) self, data_, (size_t) size);
    (*env)->ReleaseByteArrayElements (env, data, (jbyte *) data_, 0);
    return append_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1extend (JNIEnv *env, jclass c, jlong self, jbyteArray data, jlong size)
{
    jbyte *data_ = (byte *) (*env)->GetByteArrayElements (env, data, 0);
    jlong extend_ = (jlong) zchunk_extend ((zchunk_t *) (intptr_t) self, data_, (size_t) size);
    (*env)->ReleaseByteArrayElements (env, data, (jbyte *) data_, 0);
    return extend_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1consume (JNIEnv *env, jclass c, jlong self, jlong source)
{
    jlong consume_ = (jlong) zchunk_consume ((zchunk_t *) (intptr_t) self, (zchunk_t *) (intptr_t) source);
    return consume_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zchunk__1_1exhausted (JNIEnv *env, jclass c, jlong self)
{
    jboolean exhausted_ = (jboolean) zchunk_exhausted ((zchunk_t *) (intptr_t) self);
    return exhausted_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1slurp (JNIEnv *env, jclass c, jstring filename, jlong maxsize)
{
    char *filename_ = (char *) (*env)->GetStringUTFChars (env, filename, NULL);
    jlong slurp_ = (jlong) (intptr_t) zchunk_slurp (filename_, (size_t) maxsize);
    (*env)->ReleaseStringUTFChars (env, filename, filename_);
    return slurp_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1dup (JNIEnv *env, jclass c, jlong self)
{
    jlong dup_ = (jlong) (intptr_t) zchunk_dup ((zchunk_t *) (intptr_t) self);
    return dup_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zchunk__1_1strhex (JNIEnv *env, jclass c, jlong self)
{
    char *strhex_ = (char *) zchunk_strhex ((zchunk_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, strhex_);
    zstr_free (&strhex_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zchunk__1_1strdup (JNIEnv *env, jclass c, jlong self)
{
    char *strdup_ = (char *) zchunk_strdup ((zchunk_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, strdup_);
    zstr_free (&strdup_);
    return return_string_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zchunk__1_1streq (JNIEnv *env, jclass c, jlong self, jstring string)
{
    char *string_ = (char *) (*env)->GetStringUTFChars (env, string, NULL);
    jboolean streq_ = (jboolean) zchunk_streq ((zchunk_t *) (intptr_t) self, string_);
    (*env)->ReleaseStringUTFChars (env, string, string_);
    return streq_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1pack (JNIEnv *env, jclass c, jlong self)
{
    jlong pack_ = (jlong) (intptr_t) zchunk_pack ((zchunk_t *) (intptr_t) self);
    return pack_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1packx (JNIEnv *env, jclass c, jlong self)
{
    jlong packx_ = (jlong) (intptr_t) zchunk_packx ((zchunk_t **) &self);
    return packx_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zchunk__1_1unpack (JNIEnv *env, jclass c, jlong frame)
{
    jlong unpack_ = (jlong) (intptr_t) zchunk_unpack ((zframe_t *) (intptr_t) frame);
    return unpack_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zchunk__1_1digest (JNIEnv *env, jclass c, jlong self)
{
    char *digest_ = (char *) zchunk_digest ((zchunk_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, digest_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zchunk__1_1print (JNIEnv *env, jclass c, jlong self)
{
    zchunk_print ((zchunk_t *) (intptr_t) self);
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zchunk__1_1is (JNIEnv *env, jclass c, jlong self)
{
    jboolean is_ = (jboolean) zchunk_is ((void *) (intptr_t) self);
    return is_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zchunk__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zchunk_test ((bool) verbose);
}

