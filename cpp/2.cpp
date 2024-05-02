#include <iostream>
using namespace std;

void averageAndSum() {
    int count = 0; 
    int sum = 0; 
    int n = 0;

    while (n < 100) {
        cin >> n;
        sum += n;
        count++;
    }

    double average = (double)sum / count;


    cout << "합은: " << sum << endl;
    cout << "평균은: " << average << endl;
}

int main() {

    averageAndSum();

    return 0;
}

