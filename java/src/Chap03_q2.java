import java.util.Scanner;

public class Chap03_q2 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in,"MS949");

        System.out.print("분석할 영화의 수를 입력하세요 (최대10개): ");
        int movie_count = s.nextInt();
        String[] movie_names = new String[movie_count];
        String[] category_name = {"스토리", "연출", "연기", "음악", "시각효과"};
        int[][] movie_scores = new int[movie_count][category_name.length];

        for(int i =0; i<movie_count; i++)
        {
            System.out.printf("영화 %d의 제목을 입력하세요: " , i+1);
            movie_names[i] = s.next();

            System.out.println("영화의 각 카테고리 점수를 입력하세요 (1~5): ");
            for(int j=0; j<category_name.length; j++){

                while(true)
                {
                    System.out.print(category_name[j] + " : ");
                    movie_scores[i][j] = s.nextInt();
                    
                    if(movie_scores[i][j] >= 1 && movie_scores[i][j] <= 5)
                    {
                        break;
                    }
                    else
                    {
                        System.out.println("1~5 사이의 점수를 입력하세요.");
                    }
                   
                }
                
            }
        }

        System.out.println("=== 영화 평균 평점 ===");
        double[] avg_score = new double[movie_count];
        for(int movie_idx=0; movie_idx < movie_count; movie_idx++)
        {
            System.out.printf("\'%s\' 평균 평점: ", movie_names[movie_idx]);

            avg_score[movie_idx] = 0.0;
            for(int cat=0; cat<category_name.length; cat++)
            {
                avg_score[movie_idx] += (double)movie_scores[movie_idx][cat] / (double)category_name.length;
            }
            System.out.printf("%.2f\n", avg_score[movie_idx]);
        }

        double max_avg_score = 0.0;
        int max_idx = 0;

        for(int i=0; i<avg_score.length; i++)
        {
            if(max_avg_score < avg_score[i])
            {
                max_avg_score = avg_score[i];
                max_idx = i;
            }
        }
        System.out.printf("평균 평점이 가장 높은 영화: \'%s\' (평점: %.2f)\n", 
            movie_names[max_idx], avg_score[max_idx]);

        System.out.println("=== 카테고리별 평균 평점 ===");
        for(int cat=0; cat<category_name.length; cat++)
        {   
            System.out.print(category_name[cat] + " : ");
            double cat_avg = 0.0;
            for(int m=0; m < movie_scores.length; m++)
            {
                cat_avg += (double)movie_scores[m][cat] / (double)movie_scores.length;
            }
            System.out.printf("%.2f\n", cat_avg);
        }
    }
    
}