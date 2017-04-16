public class CallJava {

    static {
        System.load("/Users/gavin/Workspace/Study-JNI/03.C2Java/libcallJava.so");
    }

    public native String changeName();

    public native void sayHiFromC();

    public String firstName = "Gavin";

    public static void main(String[] args) {
        CallJava c = new CallJava();
        System.out.println("c.firstName \t" + c.firstName);
        System.out.println("c.changeName() \t" + c.changeName());
        System.out.println("c.firstName \t" + c.firstName);

        c.sayHiFromC();
    }

    public void sayHiFromJava() {
        System.out.println("sayHiFromJava");
    }

}
