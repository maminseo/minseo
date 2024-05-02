// 2024/3/13 수요일. 5칙 연산을 할 수 있는 프로그램 작성

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main()
{

	int num1, num2;
	char op;

	cout << "식을 입력하시오: ";
	cin >> num1 >> op >> num2;

	switch (op) {
	case '+' :
		cout << num1 + num2 << endl;
		break;

	case '-' :
		cout << num1 - num2 << endl;
		break;

	case '*' :
		cout << num1 * num2 << endl;
		break;

	case '/' :
		cout << num1 / num2 << endl;
		break;

	case '%' :
		cout << num1 % num2 << endl;
		break;

	default:
		cout << "잘못된 입력 입니다" << endl;
	}

	return 0;
}