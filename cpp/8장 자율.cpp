#include <iostream>
#include <string>
using namespace std;


int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet 
     = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser 
     = new PrintLaser("SCX-6x45", "삼성전자", 3, 20);
    cout << "현재 작동중인 2 대의 프린터는 
                          아래와 같다\n";
    cout << "잉크젯 : ";
    inkjet->show();
    cout << "레이저 : ";
    laser->show();
    cout << endl;
