// 2024/3/13 수요일. yes가 입력 될 때까지 종료되지 않는 프로그램 작성

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main()
{
	
	char yes[4];

	cout << "yes를 입력하시오: ";
	
	while (true) {


		cin.getline(yes, 4, '\n');

		if (strcmp(yes, "yes") == 0) {

			cout << "맞았습니다" << endl;
			break;
		}

		else
			cout << "틀렸습니다" << endl;
	}
	

	return 0;
}