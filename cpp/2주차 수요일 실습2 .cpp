// 2024/3/13 ������. 5Ģ ������ �� �� �ִ� ���α׷� �ۼ�

#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int main()
{

	int num1, num2;
	char op;

	cout << "���� �Է��Ͻÿ�: ";
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
		cout << "�߸��� �Է� �Դϴ�" << endl;
	}

	return 0;
}