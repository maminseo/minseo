//내가 처음한것
/*#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b;
    cin >> c;
    
    if(b+c>=60) {
        int count =0;
        b +=c;
        while(b>=60) {
            b -= 60;
            count++;
        }
        a += count;
        if(a>23) a-=24;
    }
    else b+=c;
   
    cout << a << " " << b;
    return 0;

}*/
//참고 짧게 한거
#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b += c;
	if (b > 59) {
		a = (b / 60 + a) % 24;
		b %= 60;
	}
	printf("%d %d", a, b);	
}