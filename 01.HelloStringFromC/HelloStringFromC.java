public class HelloStringFromC {

    public static native String helloStringFromC();

    public static void main(String[] args) {
        System.out.println(helloStringFromC());
    }

    static {
        System.load("/home/gavin/Workspace/Study-JNI/01.HelloStringFromC/libhelloString.so");
    }
}
