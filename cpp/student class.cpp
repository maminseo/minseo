#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name, major;
    int std_no;

    void setName() {
        cout << "이름을 입력하세요:";
        cin >> name;
    }
    void setStd_no() {
        cout << "학번을 입력하세요:";
        cin >> std_no;
    }
    void setMajor() {
        cout << "전공을 입력하세요:";
        cin >> major;
    }


};

int main() {

    student s1;
    s1.setName();
    s1.setStd_no();
    s1.setMajor();

    cout<< "이름: " << s1.name << " 학번: " << s1.std_no << " 전공: " + s1.major << endl;

    return 0;
}