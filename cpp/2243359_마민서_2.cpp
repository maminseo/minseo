#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS


class Book {
   char * title;
   int price;
public:
   Book(char * title, int price) {
        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);
        this->price = price;
   }
   Book(Book& b) {
        this->title = new char[strlen(b.title) + 1];
        strcpy(this->title, b.title);
        this->price = b.price;
   }
   ~Book() { if (title) delete[] title;}
   
   void set(char * title, int price) {
        if (this->title) delete[] this->title;
        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);
        this->price = price;
   }
   void show() { cout << title << ' ' << price << "원" << endl; }
};

int main() {
   Book cpp("명품C++", 10000);
   Book java = cpp;
   java.set("명품자바", 12000);
   cpp.show();
   java.show();
   return 0;
}
