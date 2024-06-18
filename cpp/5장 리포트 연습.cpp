#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

// 리포트 1
// class Buffer {
//    string text;
// public:
//    Buffer(string text) { this->text = text; }
//    void add(string next) { text += next; }
//    void print() { cout << text << endl; }
// };

// Buffer& append(Buffer& buf, string text) {
//    buf.add(text);
//    return buf;
// }
// int main() {
//    Buffer buf("Hello");
//    Buffer& temp = append(buf, "Guys");
//    temp.print();
//    buf.print();
//    return 0;
// }

//리포트 2
class Book {
   char * title;
   int price;
public:
   Book(char * title, int price) {
        int len = strlen(title);
        this -> title = new char[len+1];
        strcpy(this -> title, title);
        this -> price = price;
   }
   Book(Book& b) {
        int len = strlen(b.title);
        this -> title = new char[len+1];
        strcpy(this -> title, b.title);
        this -> price = b.price;
   }
   ~Book() { if(title) delete [] title; }

   void set(char * title, int price) {
        if(this->title) delete [] this -> title;
        int len = strlen(title);
        this -> title = new char[len+1];
        strcpy(this -> title, title);
        this -> price = price;
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

