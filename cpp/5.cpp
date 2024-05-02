#include <iostream>
using namespace std;

double circle(double r) {
    double PI = 3.14;
    double area = PI * r * r;

    return area;
}

int main() {
    double r;
    cin >> r;

    cout << circle(r) << endl;

    return 0;
}
