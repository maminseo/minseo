#include <iostream>
using namespace std;

int main() {

	int a = 5;
	int* ptr;
	

	ptr = &a;

	cout << "a�� ��: " << a << "a�� �ּ�: " << &a << endl;
	cout << "ptr�� ��: " << ptr << "ptr�� �ּ�: " << &ptr << endl;

	*ptr = 20;
	cout << "a�� ��: " << a <<  endl;

	return 0;
}