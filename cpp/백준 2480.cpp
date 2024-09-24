#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
    
    int reward = 0;
    if(a==b && b==c) reward = 10000+a*1000;
    else if(a==b || a==c) reward = 1000+a*100;
    else if(b==c) reward = 1000+b*100;
    else {
        int max = a;
        if(max<b) max=b;
        else if(max<c) max =c;
        reward = max*100; 
    }

    cout << reward;
    
    return 0;
}