#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    
    for(int i = 0; i<n; i++) cin >> array[i];
    int v;
    cin >> v;
    int cnt = 0;
    for(int i = 0; i<n; i++) {
        if(v==array[i]) cnt++;
    }
    cout << cnt;
    return 0;
}