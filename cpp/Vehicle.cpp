#include <iostream>
using namespace std;

class Vehicle {
	float fuel; // 연료 상태 변수
	int power;  // 마력 표기
	int speed;
	string name;
public:
	void speed_up();    // 속도를 올림
	void speed_down();  // 속도를 내림
	void go(int speed);
	void stop();

	float refuel(int gas); // 연료를 채움 	

	Vehicle() {
		name = "object";
		speed = 0;
		power = 0;
		fuel = 0.0;
	}

	Vehicle(int power, float fuel) {
		name = "object";
		this->power = power;
		this->fuel = fuel;
		speed = 0;
	}

	Vehicle(string name, int speed, int power, float fuel) {
		this->name = name;
		this->speed = speed;
		this->power = power;
		this->fuel = fuel;		
	}
};

void Vehicle::speed_up() {
	speed += 10;
	cout << "속도 증가 10%: " << speed << endl;
}

void Vehicle::speed_down() {
	speed -= 10;
	if (speed >= 0) {
		cout << "속도 감소 10%: " << speed << endl;
	}
	else {
		cout << "속도 감소로 정지. " << endl;
	}
}

float Vehicle::refuel(int thing) {
	cout << "연료를 " << thing << "만큼 주입" << endl;
	return fuel += thing;
}

void Vehicle::go(int speed) {
	this->speed = speed; //기본 속도 설정
	cout << "이동 시작 속도: " << speed << endl;
}

void Vehicle::stop() {
	speed = 0;
	cout << "멈춤" << endl;
}

int main() {
	Vehicle v1("탈것 1", 20, 3.5, 80);
	Vehicle v2(30, 8.0);


	v1.speed_down();
	v1.speed_up();
	v1.go(40);
	v1.stop();
	v2.speed_up();	


	return 0;
}
