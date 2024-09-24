#include <iostream> 
using namespace std;

int main() {
    int n,x;
    cin >> n,x;
    int array[n];
    
    for(int i = 0; i<n; i++) {
        cin >> array[i];
    }

    for(int i = 0; i<n; i++) {
        if(array[i] < x) cout << array[i] << " ";
    }   
    
    return 0;
}