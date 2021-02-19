#include <cstdio>

#include "includes/jni.h"

int main() {
    printf("%s\n", "Hello World!");

    _jclass _class;

    JNINativeInterface_ interface{};
    JNIEnv *env;
//    interface.NewString(env, reinterpret_cast<const jchar *>("test"), sizeof("test"));
    return 0;
}
