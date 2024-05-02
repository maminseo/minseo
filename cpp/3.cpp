#include <iostream>
using namespace std;

void multiplicationTable(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << "��:" << endl;

        for (int n = 1; n <= 9; ++n) {
            cout << i << " * " << n << " = " << i * n << endl;
        }
    }
}

int main() {
    int a, b;

    cout << "���� �� �Է�: ";
    cin >> a;

    while (true) {
        cout << "�� �� �Է�(���� �ܺ��� ū ��): ";
        cin >> b;
        if (b > a) {
            break; 
        }
    }

    multiplicationTable(a, b);

    return 0;
}
