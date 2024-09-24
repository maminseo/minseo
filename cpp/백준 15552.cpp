#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // c++ 이랑 c 안섞어서 사용 - > 시간단축
    cin.tie(0); // 입력먼저 다 받은 후 출력나옴 - > 시간 단축
    int a,b,t;
    cin >> t;
    
    for(int i =0;i<t;i++) {
        cin >> a >> b;
        cout << a+b << "\n"; // cin.tie(0); 을 쓸때는 endl 대신 \n 사용 -> endl는 출력 버퍼를 사용
    }
   
    return 0;
}