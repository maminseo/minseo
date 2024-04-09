#include <iostream>
using namespace std;

class CoffeeMachine {
    int coffee,water,sugar;
    public:
    CoffeeMachine(int coffee,int water,int sugar){
        this->coffee=coffee;
        this->water=water;
        this->sugar=sugar;
    }
    void drinkEspresso() {
        coffee = coffee - 1;
        water = water - 1;
    }

    void drinkAmericano() {
        coffee = coffee - 1;
        water = water - 1;
    }

    void drinkSugarCoffee() {
        coffee = coffee - 1;
        water = water - 1;
        sugar = sugar - 1;
    }

    void show() {
        cout << "커피머신 상태. 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
    }

    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
    }


};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}
