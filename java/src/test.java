import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int intArray[] = new int[5];

        int max =0;
        System.out.println("양수 5개를 입력하세요.");
        for(int i=0; i<5; i++){
            intArray[i] = scanner.nextInt();
            if(intArray[i] > max){
                max = intArray[i];
            }
        }
        System.out.println("가장 큰 수는 " + max + "입니다.");

        System.out.println("배열의 이름을 입력하세요.");
        String name = scanner.next();
        System.out.println("배열의 이름은 " + name + "입니다.");

        scanner.close();
    }
}
