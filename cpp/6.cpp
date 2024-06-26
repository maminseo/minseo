#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;

    if (n == 0 || n == 1) {
        return 1;
    }
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}
