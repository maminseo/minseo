#include <iostream>
using namespace std;

void input_process();   // 함수 선언
//void output_process(string name, int std_no);

int main() {
	
	input_process();   // 함수 호출

	return 0;
}

void input_process() { // 함수 정의
	string name;
	int std_no;

	while (true) {
		cout << "이름 입력: ";
		cin >> name;

		cout << "학번 입력: ";
		cin >> std_no;

		if (std_no == 0)
			break;
		else if (std_no == 1)
			cout << "계속";
		
		
	}
	
}

void output_process(string name, int std_no) {
	
	cout << endl << endl << "입력 정보 출력" << endl;
	cout << "이름: " << name << endl << "학번: " << std_no << endl;

}

