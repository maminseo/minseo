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
    CoffeeMachine java(100,100,100);
    int choice;

    while(true) {
        cout << "1.에스프레소, 2.아메리카노, 3.설탕 커피 중 선택하시오(0을 입력하면 종료합니다)" << endl;
        cin >> choice;

        if(choice == 0) {
            break;
        }
        else if(choice == 1) {  
            java.drinkEspresso();
            java.show();
        }
        else if (choice == 2) {
            java.drinkAmericano();
            java.show();
        }
        else if (choice == 3) {
            java.drinkSugarCoffee();
            java.show();
        }
        else {
            cout << "잘못된 입력입니다." << endl;
        }
    }


	return 0;
}
