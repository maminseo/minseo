#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    string b;
    cin >> a;
    cin >> b;

    int result = 0;
    int count = 1;
    for(int i=b.size()-1;i>=0;i--) {
        cout << a*stoi(b.substr(i,1)) << endl;
        result += a*stoi(b.substr(i,1))*count;
        count *= 10;
    }
    cout << result << endl;
    return 0;
}