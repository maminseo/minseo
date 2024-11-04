//교수님 파일
import java.util.Scanner;

public class Chap03_q03 {	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		String[] product_names = {"A", "B", "C", "D", "E"};
		int[][] product_sells = new int[12][product_names.length];
		
		for(int i=0; i<12; i++)
		{
			System.out.printf("=== %d월 판매 데이터===\n", i+1);
			for(int j=0; j<product_names.length; j++)
			{
				product_sells[i][j] = (int)(Math.random() * 10000) % 100;//0부터 99 사이의 임의의 정수
				System.out.printf("상품 %s의 판매 수량을 입력하세요: %d\n",
						product_names[j], product_sells[i][j]);
			}
			System.out.println();
		}
		
		// 각 상품별 연간 판매량 계산
		int[] yearly_sells = new int[product_names.length];		
		for(int p=0; p<product_names.length; p++)
		{
			for(int i=0; i<12; i++)
			{
				yearly_sells[p] += product_sells[i][p];
			}
		}
		
		System.out.println("=== 상품별 연간 판매 현황 ===");
		for(int p=0; p<product_names.length; p++)
		{
			System.out.printf("상품 %s: 총 판매 수량 = %d, 평균 판매 수량 = %.2f\n",
					product_names[p], yearly_sells[p],
					(double)yearly_sells[p] / 12);
		}
		
		int max_sells_idx = 0;
		int max_sells = 0;
		
		for(int p=0; p<product_names.length; p++)
		{
			if(yearly_sells[p] > max_sells)
			{
				max_sells = yearly_sells[p];
				max_sells_idx = p;
			}
		}
		System.out.printf("연간 판매 수량이 가장 높은 상품: %s (총 판매 수량: %d)\n\n",
				product_names[max_sells_idx], yearly_sells[max_sells_idx]);
		
		System.out.print("총 판매 수량을 알고 싶은 월을 입력하세요 (1-12): ");
		int select_month = s.nextInt();
		
		int monthly_sell = 0;
		for(int p=0; p<product_names.length; p++)
		{
			monthly_sell += product_sells[select_month-1][p];
		}
		System.out.printf("%d월의 총 판매 수량: %d\n", select_month, monthly_sell);
	}

}
