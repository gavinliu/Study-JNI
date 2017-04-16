#include <stdio.h>
#include <stdlib.h>

#include "java_HelloStringFromC.h"

JNIEXPORT jstring JNICALL Java_HelloStringFromC_helloStringFromC(JNIEnv* env, jclass cls) {

    return (*env)->NewStringUTF(env, "Hello");
}
