#include <iostream>
using namespace std;

bool isMultiple(int a, int b);

int main() {
	int a, b;
	cin >> a >> b;

	if (isMultiple(a, b))
		cout << "yes";
	else
		cout << "no";

	return 0;
}


bool isMultiple(int a, int b) {
	if (b % a == 0) return true;
	else return false;

}