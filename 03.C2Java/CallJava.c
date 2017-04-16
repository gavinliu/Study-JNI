#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CallJava.h"

JNIEXPORT jstring JNICALL Java_CallJava_changeName
 (JNIEnv * env, jobject obj) {
     // 获取 jclass
     jclass cls = (*env)->GetObjectClass(env, obj);
     // 获取 fieldID
     jfieldID firstNameID = (*env)->GetFieldID(env, cls, "firstName", "Ljava/lang/String;");
     // 获取 属性
     jstring firstName = (*env)->GetObjectField(env, obj, firstNameID);

     // 拼接新字符串
     const char* str = (*env)->GetStringUTFChars(env, firstName, JNI_FALSE);
     char src[50] = "super ";
     strcat(src, str);

     // 设置 属性
     jstring newName = (*env)->NewStringUTF(env, src);
     (*env)->SetObjectField(env, obj, firstNameID, newName);

     return newName;
}


JNIEXPORT void JNICALL Java_CallJava_sayHiFromC
(JNIEnv * env, jobject obj) {
    // 获取 jclass
    jclass cls = (*env)->GetObjectClass(env, obj);
    // 获取 methodID
    jmethodID methodID = (*env)->GetMethodID(env, cls, "sayHiFromJava", "()V");
    // 调用方法
    (*env)->CallVoidMethod(env, obj, methodID);
    
    printf("%s\n", "sayHiFromC");
}
