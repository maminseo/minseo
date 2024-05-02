#include <iostream>
using namespace std;

int main() {

	int a = 5;
	int* ptr;
	

	ptr = &a;

	cout << "a의 값: " << a << "a의 주소: " << &a << endl;
	cout << "ptr의 값: " << ptr << "ptr의 주소: " << &ptr << endl;

	*ptr = 20;
	cout << "a의 값: " << a <<  endl;

	return 0;
}