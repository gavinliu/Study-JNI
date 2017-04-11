# Study-JNI

Platform: MacOS | Linux
Compile: gcc & javac & javah

## How to use ?

### generate jni header file

```bash
javah -jni <java file>
```

### compile so library

```bash
gcc hello.c -fPIC -shared -o  libhello.so
```

### jni test

```java
public class HelloStringFromC {

    public static native String helloStringFromC();

    public static void main(String[] args) {
        System.out.println(helloStringFromC());
    }

    static {
        System.load("{your dir}/Study-JNI/01.HelloStringFromC/libhelloString.so");
    }
}
```
