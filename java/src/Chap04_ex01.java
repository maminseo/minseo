// 예쩨 02. 영화 평점 분석기의 코드를 클래스화
//'영화'객체를 정의
//상태 : 이름, 카테고리별 이름, 카테고리별 점수
//행동 : 평균평점 계산하기

class Movie {
    //상태 변수는 나열할 수 있지만 값을 초기화 하는 건 x - > 상태는 인스턴스마다 다르기 때문
    String title;
    // static String[] category = {"스토리", "연출", "연기", "음악", "시각효과"};
    String[] categories;
    double[] scores;
    
    //생성자 : 클래스 이름(파라미터)
    //        인스턴스의 상태를 초기화 하기 위한 함수
    //생성자는 함수지만 반환형을 작성하지 않는 특별한 함수
    Movie()
    {
        title = "베테랑2";
        categories = new String[5];
        categories[0] = "스토리";
        categories[1] = "연출";
        categories[2] = "연기";
        categories[3] = "음악";
        categories[4] = "시각효과";
        scores = new double[5];
        scores[0] = 4.7;
        scores[1] = 3.4;
        scores[2] = 2.7;
        scores[3] = 4.3;
        scores[4] = 4.8;
        

    }
    //행동 : 평균평점 계산
    //       모든 상태값이 '정상'일 때 실행된다고 가정
    double getAvgScore() {
        
        double avgScore = 0.0;
        for (double score : scores ) {
            avgScore += score / scores.length;
        }
        return avgScore;
    }
}

public class Chap04_ex01 {
    public static void main(String[] args) {
        Movie m1 = new Movie();
        // // m1에 대한 무결성이 깨진 상태
        // m1.title = "베테랑2";
        // m1.categories = new String[5];
        // m1.categories[0] = "스토리";
        // m1.categories[1] = "연출";
        // m1.categories[2] = "연기";
        // m1.categories[3] = "음악";
        // m1.categories[4] = "시각효과";
        // m1.scores = new double[5];
        // m1.scores[0] = 4.7;
        // m1.scores[1] = 3.4;
        // m1.scores[2] = 2.7;
        // m1.scores[3] = 4.3;
        // m1.scores[4] = 4.8;
        // // m1에 대한 무결성 확보
        System.out.printf("%s의 평균평점은 %.2f입니다.\n", m1.title, m1.getAvgScore());
    }
}
