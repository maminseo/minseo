import java.util.Arrays;

public class Chap04_ex02 
{
    //1. 반환값 X 파라미터 X
    static void myfunc1()
    {
        System.out.printf("myfunc1 실행 - ");
    }

    //2. 반환값 O 파라미터 X
    static double myfunc2()
    {
        double PI = 3.141592;
        System.out.printf("myfunc2 실행 -");
        return PI;
    }

    //3. 반환값 X 파라미터 o -파라미터는 데이터형과 이름을 같이 나열
    // 함수를 정의할 때 전달받아야 하는 값 (a,b) => 파라미터
    // a와 b는 함수의 호출과 동시에 전달된 argument의 값으로 초기화 되는 변수다.
    //myfunc3 에서 a 순서에 변수 x를 전달했다는 a와 x는 같은가> = > 같지 않다
    //a와 x가 같냐는 질문은 명확하게 하면 "변수 a와 x가 가리키는 메모리 주소가 같나?"
    //메모리 주소는 동일하지 않고, argument에 나열된 변수의 '값'만 전달된다.
    static void myfunc3(int a, int b)
    {
        int c = a + b;
        System.out.printf("myfunc3 실행 - %d + %d = %d\n", a, b, c);
    }

    //4. 반환값 o 파라미터 o
    //모든 프로그래밍 언어에서 함수는 하나의 정보만 반환할 수 있다.
    //자바에서는 인스턴스를 만들어서 반환하거나 배열에 담아서 반환

    static int myfunc4(int a, int b)
    {
        int c = a + b;
        System.out.printf("myfunc4 실행 - ");
        return c;
    }

    static int[] myfunc5(int a, int b)
    {
        System.out.printf("myfunc5 실행 - ");
        int[] result = new int[4];
        result[0] = a + b;
        result[1] = a - b;
        result[2] = a * b;
        result[3] = a / b;

        return result;
    }
    
    // main 함수의 numbers와 mydunc6 함수의 nums는 같다.
    static int myfunc6(int[] nums , int y)
    {
       int sum = 0; 

       nums[1] = 70;
       y = 55;
       for(int n : nums)
       {
           sum += n;
       }
       System.out.printf("myfunc6 실행 - ");
       return sum;
    }


    public static void main(String[] args) 
    {
        myfunc1();
        double PI = myfunc2();
        System.out.println("원주율 : " + PI);

        //함수를 호출할 때 전달하는 값(10,20) => arguments
        int x =15, y=25;
        myfunc3(x,y);
        int sum = myfunc4(x,y);
        System.out.printf("%d + %d = %d\n", x, y, sum);

        int[] math = myfunc5(x,y);
        String[] op = {"+", "-", "*", "/"};
        for(int i=0; i<math.length; i++)
        {
            System.out.println(op[i] + ":" + math[i]);
        }

        int[] numbers = {30, 50 , 60};
        int tmp = 20;
        int total = myfunc6(numbers, tmp);

        System.out.println("총합 : " + total);
        System.out.println("numbers : " + Arrays.toString(numbers));
        System.out.println("tmp : " + tmp);
    }

}
