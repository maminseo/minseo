import java.util.Scanner;

public class Chap03_ex03 {
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
        
        // 가장 큰 값 탐색
        int max = -9999999;
        for(int idx = 0; idx<intArray.length; idx++){
            if(intArray[idx] > max){
                max = intArray[idx];
            }
        }
        
        System.out.println("가장 큰 값 : " + max);
        s.close();
    }
}
