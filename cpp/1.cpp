#include <iostream>
using namespace std;

void evensum(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "짝수합: " << sum << endl;
}

void oddsum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "홀수합: " << sum << endl;
}

int main() {
    int n;
    cout << "50 이하의 정수를 입력하세요: ";
    cin >> n;

    if (n <= 50) {
        evensum(n);
        oddsum(n);
    }
    else {
        cout << "50 이하의 정수가 아닙니다." << endl;
    }

    return 0;
}
