#include <iostream>
using namespace std;

bool bigger(int a, int b, int & big) {
    if (a==b) return true;
    else if (a>b) {
        big = a;
        return false;
    }
    else { 
        big = b;
        return false;
    }
}

int main() {
    int a,b;
    cout << "정수 두개를 입력하시오:" << endl;
    cin >> a >> b;

    int big = 0;
    cout << bigger(a, b, big) << endl;
    cout << big << endl;

    return 0;
}

