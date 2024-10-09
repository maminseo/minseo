import java.util.Scanner;

public class Chap03_q1 {
    public static void main(String[] args) {
       Scanner s = new Scanner(System.in); 

       String[] departments = {"내과", "외과", "소아과", "정형외과"};
       String[][] timeSlots = {
            {"09:00", "10:00", "11:00"}, //내과
            {"13:00", "14:00", "15:00"}, //외과
            {"10:00", "11:00", "12:00"}, //소아과
            {"14:00", "15:00", "16:00"} //정형외과
       };

       //과목별 시간의 예약자 수
       int[][] reservations = new int[departments.length][3];

       //메인 화면
       while(true) {
        System.out.println("=== 병원 예약 시스템 ===");
        System.out.println("1. 예약하기");
        System.out.println("2. 예약 현황 보기");
        System.out.println("3. 종료");
        System.out.print("원하는 작업을 선택하세요 :");
        int menuChoice = s.nextInt();

        if(menuChoice == 1) { // 예약하기
            System.out.print("환자 이름을 입력하세요: ");
            String name = s.next();

            //진료과목 선택
            System.out.println("진료과목을 선택하세요: ");
            for(int i=0; i<departments.length; i++) {
                System.out.println((i+1) + ". " + departments[i]);
            }
            System.out.print("번호를 입력하세요: ");
            int deptChoice = s.nextInt() -1 ;
            if(deptChoice < 0 || deptChoice >= departments.length) {
                System.out.println("올바른 번호가 아닙니다.");
                continue;
            }
            
            //선택한 과의 예약 가능한 시간대 선택
            System.out.println(departments[deptChoice] + "의 예약 가능 시간대: ");
            for(int i=0; i<timeSlots[deptChoice].length; i++) {
                System.out.printf("%d. %s (예약 가능: %d명)\n",
                    i+1, timeSlots[deptChoice][i], 3-reservations[deptChoice][i]);
            }
            System.out.print("원하는 시간대 번호를 선택하세요: ");
            int timeChoice = s.nextInt() -1;
            if(timeChoice < 0 || timeChoice >= timeSlots[deptChoice].length) {
                System.out.println("올바른 시간대가 아닙니다니다.");
                continue;
            }
            
            //예약 하려는 시간대에 예약자가 3 미만인 경우 예약 성공
            if(reservations[deptChoice][timeChoice] < 3) {
                reservations[deptChoice][timeChoice]++;
                System.out.printf("예약이 완료되었습니다. %s 과목의 %s 시간대로 예약되었습니다.\n",
                    departments[deptChoice], timeSlots[deptChoice][timeChoice]);
            }
            else {
                System.out.println("선택하신 시간대의 예약이 마감되었습니다.");
            }

        }
        else if(menuChoice == 2) 
        { // 예약 현황 보기
            System.out.println("=== 예약 현황 ===");
            for(int deptIdx=0; deptIdx<departments.length; deptIdx++) 
            {
                System.out.println(departments[deptIdx] + ": ");
                for(int timeIdx=0; timeIdx<timeSlots[deptIdx].length; timeIdx++) 
                {
                    System.out.printf("%s - 예약 현황: %d/3\n",
                        timeSlots[deptIdx][timeIdx], 3-reservations[deptIdx][timeIdx]);
                }
            }
        }
        else if(menuChoice == 3) 
        { // 종료
            System.out.println("프로그램을 종료합니다.");
            break;
        }
        else {
            System.out.println("1-3 사이의 숫자를 입력하세요");
        }
        }
    }


}
