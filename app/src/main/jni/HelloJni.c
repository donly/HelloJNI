#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_yaokan_hellojni_Test_test(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "MAGICALBOY");
}