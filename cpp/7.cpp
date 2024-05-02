#include <iostream>
using namespace std;

void swapArray(int* p, int* q, int size) {
    for (int i = 0; i < size; ++i) {
        int temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

void printArray(int* p, int size) {
    for (int i = 0; i < size; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 9, 8, 7, 6, 5 };
    int size = sizeof(a) / sizeof(a[0]); 

    cout << "�迭 a = ";
    printArray(a, size);
    cout << "�迭 b = ";
    printArray(b, size);

    cout << "\nswapArray() ����:\n";
    swapArray(a, b, size);

    cout << "�迭 a = ";
    printArray(a, size);
    cout << "�迭 b = ";
    printArray(b, size);

    return 0;
}
