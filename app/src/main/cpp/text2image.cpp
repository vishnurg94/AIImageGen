#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_text2image_MainActivity_getSecretKey(JNIEnv* env, jobject /* this */) {
    std::string secret = "c0957e34a11786192e8819a7d4faef725c3a0becf05716823b30e37111196e92ba1953a695dddd761cce8abbffefce40da8059d06aa651a02f9cc3322a7d1e0b";
    return env->NewStringUTF(secret.c_str());
}