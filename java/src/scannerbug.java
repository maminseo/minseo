import java.util.Scanner;

public class scannerbug {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in); //System.in : 표준 입력
        // 버퍼에 값이 있는게 확인되면
        //그 값을 버퍼에 가져와서 변수에 대입

        // int n1 = s.nextInt();   //   n1 <= 50  버퍼 : \n
        // int n2 = s.nextInt();   //   n2 <= \n  정수로 변환 x

        int n1 = s.nextInt();   //   n1 <= 50  
        s.nextLine();           //  표준 입력 버퍼를 초기화하는 역할
        int n2 = s.nextInt();   //   n2 <= 30

        System.out.println("n1 : " + n1);
        System.out.println("n2 : " + n2);
    }
}
