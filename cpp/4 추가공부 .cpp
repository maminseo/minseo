// 2024.05.01 포인트 공부

#include <iostream>
using namespace std;


void input(int *arr, int& size) {
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

    int arr[] = {};
    int size = 0;

    input(arr, size);

    cout << "size: " << size << endl;

    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    return 0;
}