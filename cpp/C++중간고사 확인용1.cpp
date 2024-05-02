//2024-05-02 중간고사 재시험 15,16 문제 비슷하게 만들어봄
// 객체 둘중 더 빠른거 찾기
// 15.p->나 (*p) 로 해야대는데 *p를 씀 틀림 ㅎㅎㅎㅎㅎㅎ 부분 점수 주기를... 틀렷으니...0점인가요..?
// 16. 은 맞음

#include <iostream>
#include <string>
using namespace std;

class Car {
	int power;  
	int speed;
	string name;
public:
	void speed_up() {
        speed += 10;
	    cout << "속도 증가 10%: " << speed << endl;
    }    
	void speed_down() {
        speed -= 10;
	    if (speed >= 0) {
		    cout << "속도 감소 10%: " << speed << endl;
	    }
	    else {
		    cout << "속도 감소로 정지. " << endl;
	    }
    }
	void go(int speed) {
        this->speed = speed; 
	    cout << "이동 시작 속도: " << speed << endl;
    }
	void stop() {
        speed = 0;
	    cout << "멈춤" << endl;
    }

    void isFaster(Car* p) {
        if (speed > (*p).speed) {
            cout << name << "가 더 빠름" << endl;
        }
        else if (speed < p->speed) {
            cout << p->name << "가 더 빠름" << endl;
        }
        else {
            cout << "속도가 같음" << endl;
        }
    }

	Car(string name, int power, int speed) {
		this->name = name;
		this->power = power;
		this->speed = speed;
	}
};


int main() {
	Car c1("일반차", 10, 100);
	Car c2("스포츠카", 50, 200);

    c1.isFaster(&c2);

	return 0;
}


