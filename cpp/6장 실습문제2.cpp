#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0){
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() {
        return title;
    }
    friend bool operator==(Book a, int b);

    bool operator==(string a) {
        if (title == a) return true;
        else return false;
    }
    friend bool operator==(Book a, Book b);
};
bool operator==(Book a, Book b) {
    if (a.title == b.title && a.price == b.price && a.pages == b.pages) return true;
    else return false;
}

bool operator==(Book a, int b) {
    if (a.price == b) return true;
    else return false;
}

int main() {
    Book a("명품 C++" , 30000, 500), b("고품 C++", 30000, 500);
    if(a == 30000) cout << "정가 30000원" << endl; // price 비교 
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교 
    if(a == b) cout << "두 책이 같은 책입니다." << endl;  // title, price, pages 모두 비교 

}
