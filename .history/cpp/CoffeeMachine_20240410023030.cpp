#include <iostream>
using namespace std;

class CoffeeMachine {
    int coffee,water,suger;
    public:
    CoffeeMachine(int coffee,int water,int suger){
        this->coffee=coffee;
        this->water=water;
        this->suger=suger;
    }
    void drinkEspresso() {
        coffee = coffee - 1;
        water = water - 1;
    }

    void drinkAmericano() {
        coffee = coffee - 1;
        water = water - 1;
    }

    void drinkSugerCoffee() {
        coffee = coffee - 1;
        water = water - 1;
        suger = suger - 1;
    }

    void show() {
        cout << "커피머신 상태. 커피:" << coffee << " 물:" << water << " 설탕:" << suger << endl;
    }

    void fill() {
        coffee = 10;
        water = 10;
        suger = 10;
    }


};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugerCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}
