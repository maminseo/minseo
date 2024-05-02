#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle() {
        width = 1;
        height = 1;
    }
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    Rectangle(int n) {
        width = height = n;
    }
    bool isSquare() {
        if(width == height) return true;
        else return false;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
