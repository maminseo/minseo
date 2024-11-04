//교수님 파일
import java.util.Scanner;

public class Chap03_q02 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.print("분석할 영화의 수를 입력하세요 (최대 10개): ");
		int movie_count = s.nextInt();
		
		String[] movie_names = new String[movie_count];		
		String[] category_names = {"스토리", "연출", "연기", "음악", "시각효과"};
		int[][] movie_scores = new int[movie_count][category_names.length];
		
		for(int i=0; i<movie_count; i++)
		{
			System.out.printf("영화 %d의 제목을 입력하세요: ", i+1);
			movie_names[i] = s.next();
			
			System.out.printf("\'%s\' 영화의 각 카테고리 평점을 입력하세요 (1~5):\n",
					movie_names[i]);
			
			for(int j=0; j<category_names.length; j++)
			{
				System.out.print(category_names[j] + ": ");
				movie_scores[i][j] = s.nextInt();
				while(true)
				{
					
					
					if(movie_scores[i][j] >= 1 && movie_scores[i][j] <=5)
					{
						break;
					}
					else
					{
						System.out.println("1-5 사이의 정수를 입력해야 합니다.");
					}
				}
					
			}
		}
		
		System.out.println("=== 영화 평균 평점 ===");
		double[] avg_scores = new double[movie_count];
		
		for(int movie_idx=0; movie_idx < movie_count; movie_idx++)
		{
			System.out.printf("\'%s\' 평균 평점: ", movie_names[movie_idx]);
			
			avg_scores[movie_idx] = 0.0;
			for(int cat=0; cat<category_names.length; cat++)				
			{
				avg_scores[movie_idx] += (double)movie_scores[movie_idx][cat] / category_names.length;
			}
			System.out.printf("%.2f\n", avg_scores[movie_idx]);
		}
	

		double max_avg_score = 0.0;
		int max_idx = 0;
		
		for(int i=0; i<avg_scores.length; i++)
		{
			if(max_avg_score < avg_scores[i])
			{
				max_avg_score = avg_scores[i];
				max_idx = i;
			}
		}
		System.out.printf("\n평균 평점이 가장 높은 영화: \'%s\' (평점: %.2f)\n",
				movie_names[max_idx], avg_scores[max_idx]);

		System.out.println("=== 카테고리별 평균 평점 ===");
		for(int cat=0; cat<category_names.length; cat++)
		{
			System.out.print(category_names[cat] + ": ");
			
			double cat_avg = 0.0;
			for(int m=0; m<movie_scores.length; m++)
			{
				cat_avg += movie_scores[m][cat] / (double)movie_scores.length;
			}
			System.out.printf("%.2f\n", cat_avg);
		}
	}

}
