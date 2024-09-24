#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s = "*";
    cin >> n;
    
    for(int i =1;i<=n;i++) {
        cout.width(n);
        cout << s << endl;
        s += "*";
    }
   
    return 0;
}