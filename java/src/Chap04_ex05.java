class MyMath {
    public static int myabs(int n) {
        return n >= 0 ? n : -n;
    }

    private MyMath() {}
}


public class Chap04_ex05 {
    public static void main(String[] args) {
        int a = -77, b = -55;

        // MyMath mm = new MyMath();
        // a = mm.myabs(a);
        // b = mm.myabs(b);

        // System.out.println(a);
        // System.out.println(b);
        // a = -77;
        // b = -55;
        a = MyMath.myabs(a);
        b = MyMath.myabs(b);
        System.out.println(a);
        System.out.println(b);
    }
}
