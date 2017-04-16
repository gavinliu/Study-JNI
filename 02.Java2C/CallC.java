public class CallC {

    public static native String getFullName(String firstName);

    public native String getFirstName(String[] fullName);

    public static void main(String[] args) {
        System.out.println(getFullName("Gavin"));

        String[] fullName = {"Gavin", "Liu"};

        System.out.println(new CallC().getFirstName(fullName));
    }

    static {
        System.load("/Users/gavin/Workspace/Study-JNI/02.Java2C/libcallC.so");
    }
}
