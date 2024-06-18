#include <iostream>
using namespace std;


class Circle{
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    void setRN(string name, int radius) {
        this->name = name;
        setRadius(radius);
    }
    string getName() { return name; }
};

int main() {
    NamedCircle pizza[3];

    cout << "3개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for (int i = 0; i < 3; i++) {
        string name;
        int radius;
        cout << i+1 << ">> ";
        cin >> radius >> name ;
        pizza[i].setRN(name, radius);
    }

    int max = 0;
    for (int i = 1; i < 3; i++) {
        if (pizza[max].getRadius() < pizza[i].getRadius()) max = i;
    }
    cout << "가장 면적이 큰 피자는" << pizza[max].getName() << "입니다." << endl;
    return 0;
}