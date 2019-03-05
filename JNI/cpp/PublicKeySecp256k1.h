// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef JNI_TW_PUBLICKEYSECP256K1_H
#define JNI_TW_PUBLICKEYSECP256K1_H

#include <jni.h>
#include <TrustWalletCore/TWBase.h>

TW_EXTERN_C_BEGIN

JNIEXPORT
jbyteArray JNICALL Java_wallet_core_jni_PublicKeySecp256k1_initWithData(JNIEnv *env, jclass thisClass, jbyteArray data);

JNIEXPORT
jboolean JNICALL Java_wallet_core_jni_PublicKeySecp256k1_isValid(JNIEnv *env, jclass thisClass, jbyteArray data);

JNIEXPORT
jobject JNICALL Java_wallet_core_jni_PublicKeySecp256k1_recover(JNIEnv *env, jclass thisClass, jbyteArray signature, jbyteArray message);

JNIEXPORT
jboolean JNICALL Java_wallet_core_jni_PublicKeySecp256k1_isCompressed(JNIEnv *env, jobject thisObject);

JNIEXPORT
jobject JNICALL Java_wallet_core_jni_PublicKeySecp256k1_compressed(JNIEnv *env, jobject thisObject);

JNIEXPORT
jbyteArray JNICALL Java_wallet_core_jni_PublicKeySecp256k1_data(JNIEnv *env, jobject thisObject);

JNIEXPORT
jstring JNICALL Java_wallet_core_jni_PublicKeySecp256k1_description(JNIEnv *env, jobject thisObject);

JNIEXPORT
jboolean JNICALL Java_wallet_core_jni_PublicKeySecp256k1_verify(JNIEnv *env, jobject thisObject, jbyteArray signature, jbyteArray message);


TW_EXTERN_C_END

#endif // JNI_TW_PUBLICKEYSECP256K1_H
