#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CallC.h"

JNIEXPORT jstring JNICALL Java_CallC_getFullName
(JNIEnv* env, jclass jcl, jstring firstName) {
    const char* fn = (*env)->GetStringUTFChars(env, firstName, JNI_FALSE);
    const char* ln = " Liu";

    char src[50], dest[50];
    strcpy(src,  ln);
    strcpy(dest, fn);

    strcat(dest, src);
    return (*env)->NewStringUTF(env, dest);
}


JNIEXPORT jstring JNICALL Java_CallC_getFirstName
(JNIEnv* env, jobject jobj, jobjectArray fullName) {
    jstring elm = (jstring) (*env)->GetObjectArrayElement(env, fullName, 0);
    return elm;
}
