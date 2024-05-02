// 과제 내고 난 후 검토임

#include <iostream>
using namespace std;


void input(int arr[], int& size) {
    size = 0;

    while (size <= 100) {
        int num;
        cin >> num;

        if (num == 0) {
            break;
        }
        arr[size++] = num;

    }
}
int main() {

    int arr[100];
    int size;

    input(arr, size);

    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    return 0;
}