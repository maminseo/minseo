#include <iostream>
using namespace std;

int main() {
    int x,n;
    cin >> x >> n;
    
    int a[n],b[n];
    for(int i =0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    int add = 0;
    for(int i =0;i<n;i++) {
        add += a[i]*b[i];
    }
    if(x==add) cout << "Yes";
    else cout << "No";
    
    return 0;
}