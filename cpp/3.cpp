#include <iostream>
using namespace std;

void multiplicationTable(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << "단:" << endl;

        for (int n = 1; n <= 9; ++n) {
            cout << i << " * " << n << " = " << i * n << endl;
        }
    }
}

int main() {
    int a, b;

    cout << "시작 단 입력: ";
    cin >> a;

    while (true) {
        cout << "끝 단 입력(시작 단보다 큰 값): ";
        cin >> b;
        if (b > a) {
            break; 
        }
    }

    multiplicationTable(a, b);

    return 0;
}
