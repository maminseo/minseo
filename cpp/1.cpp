#include <iostream>
using namespace std;

void evensum(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "¦����: " << sum << endl;
}

void oddsum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "Ȧ����: " << sum << endl;
}

int main() {
    int n;
    cout << "50 ������ ������ �Է��ϼ���: ";
    cin >> n;

    if (n <= 50) {
        evensum(n);
        oddsum(n);
    }
    else {
        cout << "50 ������ ������ �ƴմϴ�." << endl;
    }

    return 0;
}
