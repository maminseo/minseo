#include <iostream>
#include <string>
using namespace std;

class Printer {
    string model;
    string manufacture;
    int printedCount;
    int availableCount;
public:
    Printer(string model, string manufacture, int availableCount) {
        this->model = model;
        this->manufacture = manufacture;
        this->availableCount = availableCount;
        printedCount = 0;
    }
    void print(int pages) {
        if (availableCount < pages) {
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
            return;
        }
        cout << "프린트 하였습니다.\n";
        printedCount += pages;
        availableCount -= pages;
    }
    void show() {
        cout << manufacture << ", " << model << ", 남은 종이" << availableCount;
    }
};

class PrintInkJet : public Printer {
    int availableInk;
public:
    PrintInkJet(string model, string manufacture, int availableCount, int availableInk)
        : Printer(model, manufacture, availableCount) {
        this->availableInk = availableInk;
    }
    void printInkJet(int pages) {
        Printer::print(pages);
        availableInk -= pages;
    }
    void show() {
        Printer::show();
        cout << "남은 잉크 " << availableInk << endl;
    }
};

class PrintLaser : public Printer {
    int availableToner;
public:
    PrintLaser(string model, string manufacture,int availableCount, int availableToner)
        : Printer(model, manufacture, availableCount) {
        this->availableToner = availableToner;
    }
    void printLaser(int pages) {
        Printer::print(pages);
        availableToner -= pages;
    }
    void show() {
        Printer::show();
        cout << "남은 토너 " << availableToner << endl;
    }
};

int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet 
     = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser 
     = new PrintLaser("SCX-6x45", "삼성전자", 3, 20);
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : ";
    inkjet->show();
    cout << "레이저 : ";
    laser->show();
    cout << endl;

    while (1) {
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력: ";
        cin >> pnum >> pages;
        if (pnum == 1) {
            inkjet->printInkJet(pages);
        }
        else if (pnum == 2){
            laser->printLaser(pages);
        }
        else {
            cout << "잘못 입력하셨습니다.\n";
            continue;
        }
        cout << "잉크젯 : ";
        inkjet->show();
        cout << "레이저 : ";
        laser->show();
        cout << "계속 인쇄하시겠습니까?(Y/N) : ";
        cin >> yon;
        if (yon == 'N' || yon == 'n') break;
    }
}  