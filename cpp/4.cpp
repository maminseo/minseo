#include <iostream>
using namespace std;


void input(int arr[100], int& size) {
    size = 0; 

    while (true) {
        int num;
        cin >> num;

        if (num == 0) {
            break;
        }

        if (size >= 100) {
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
