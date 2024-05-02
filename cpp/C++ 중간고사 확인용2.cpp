//2024-05-02 중간고사 재시험 17 문제 비슷하게 만들어봄
// 동적배열 할당해서 학생 수만큼 이름 나이 전공 입력받기 +void setInfo(string name, int age, string major) 함수 만들기
// 이건 맞은듯

#include <iostream> 
#include <string>
using namespace std;

class Person {
	string name,major;
	int age;
public:
    void setInfo(string n, int a, string m) {
        name = n;
        age = a;
        major = m;
    }
	void printInfo() {
        cout << "이름: " << name << ", 나이: " << age << ", 전공: " << major << endl;
    }

};

int main(){
	Person *p;
    int n;
    string name, major;
    int age;

    cout << "학생 수: ";
    cin >> n;
    p = new Person[n];

    for (int i = 0; i < n; i++) {
        cout << "이름: ";
        cin >> name;
        cout << "나이: ";
        cin >> age ;
        cout << "전공: ";
        cin >> major;
        p[i].setInfo(name, age, major);
        p[i].printInfo();
    }
    
    delete[] p;

	return 0;

}