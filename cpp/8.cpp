#include <iostream>
using namespace std;


int maximum(int a[], int  size) {
	int i, max;
	max = a[0];

	for (i = 0; i < size; i++)
		if (max >= a[i])
			max = max;

		else max = a[i];

	return max;
}
int minimum(int a[], int  size) {
	int i, min;
	min = a[0];

	for (i = 0; i < size; i++)
		if (min <= a[i])
			min = min;
		else min = a[i];

	return min;

}
int main() {

	int array[10] = { 9, 5, 11, 4, 1, 3, 7, 12, 2, 8 };

	cout << "�ִ밪��?: " << maximum(array, 10) << endl;
	cout << "�ּҰ���?: " << minimum(array, 10) << endl;

	return 0;

}