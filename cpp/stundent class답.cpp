#include <iostream>
#include <string>
using namespace std;

class Student {
	int std_no; //학번
	string name; // 이름
	string major; // 전공
public:
	void setStd_no(int std_no) {
        this->std_no = std_no;
        cout <<  std_no << endl;
    }
	void setName(string name) {
        this->name = name;
        cout << name << endl;
    }
    void setMajor(string major) {
        this->major = major;
        cout << major << endl;
        
    } 
};

int main() {
    Student s1; 
    s1.setStd_no(24553322);
    s1.setName("min");
    s1.setMajor("com");
    
    return 0;
}
