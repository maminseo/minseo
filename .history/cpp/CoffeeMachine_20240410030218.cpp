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
        coffee = coffee - 4;
        water = water - 6;

        if (coffee <= 0 || water <= 0) {
            cout << "에스프레소를 만들 재료가 부족합니다" << endl;
            Refill();
        }    
        else {
        cout << "에스프레소를 만들었습니다" << endl;
        }
    }

    void drinkAmericano() {
        coffee = coffee - 2;
        water = water - 7;

         if (coffee <= 0 || water <= 0) {
            cout << "아메리카노를 만들 재료가 부족합니다" << endl;
            Refill();
        }    
        else {
        cout << "아메리카노를 만들었습니다" << endl;
        }
    }

    void drinkSugarCoffee() {
        coffee = coffee - 3;
        water = water - 5;
        sugar = sugar - 3;

         if (coffee <= 0 || water <= 0 || sugar <= 0) {
            cout << "설탕 커피를 만들 재료가 부족합니다" << endl;
            Refill();
        }    
        else {
        cout << "설탕 커피를 만들었습니다" << endl;
        }
    }

    void show() {
        cout << "커피머신 상태. 커피:" << coffee << " 물:" << water << " 설탕:" << sugar << endl;
    }

    void Refill() {
        if (coffee < 10) {
            cout << "커피를 " << 100-coffee << "추가합니다" << endl;
            coffee = coffee + (100-coffee);
        }
        if (water < 10) {
            cout << "물을 " << 100-water << "추가합니다" << endl;
            water = water + (100-water);
        }
        if (sugar < 10) {
            cout << "설탕을 " << 100-sugar << "추가합니다" << endl;
            sugar = sugar + (100-sugar);
        }
    }
};

int main() {
    CoffeeMachine java(100,100,100);
    int choice;

    while(true) {
        cout << "1.에스프레소, 2.아메리카노, 3.설탕 커피 중 선택하시오 (0을 입력하면 종료합니다)" << endl;
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
