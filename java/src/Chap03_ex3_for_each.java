import java.util.Scanner;

public class Chap03_ex3_for_each {
    public static void main(String[] args) {
        //배열의 크기를 입력받아 정수형 배열을 선언 및 할당하고
        //배열의 내용을 입력받은 후 가장큰 값을 탐색 & 출력
        
        //크기를 입력받아 배열 선언 및 할당
        Scanner s = new Scanner(System.in);
        System.out.print("배열의 크기 => ");
        int intArrayLen = s.nextInt();
        int [] intArray = new int[intArrayLen];

        // 배열의 내용 입력
        for(int idx = 0; idx < intArrayLen; idx++){
            System.out.print("인덱스 [" + idx + "] : ");
            intArray[idx] = s.nextInt();
        }
        
        // 가장 큰 값 탐색(for-each문 사용)  
        // 배열의 내용 작성에서는 for-each 사용x 배열의 내용을 가져올 때 사용
        int max = -9999999;
        for(int k: intArray) {
            max = k > max ? k : max;
        }
        
        System.out.println("가장 큰 값 : " + max);
        s.close();
    }
}

