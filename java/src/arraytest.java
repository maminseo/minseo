public class arraytest {
    int i[][] = new int[2][5];
    int size1 = i.length;
    int size2 = i[0].length;
    int size3 = i[1].length;

    public static void main(String[] args) {
        arraytest at = new arraytest();
        System.out.println("size1 : " + at.size1);
        System.out.println("size2 : " + at.size2);
        System.out.println("size3 : " + at.size3);
    }
}
