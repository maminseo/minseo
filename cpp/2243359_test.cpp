
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream inputFile("C:\\Users\\darkr\\minseo\\cpp\\1.inp"); // 파일 열기
    if (!inputFile) {
        cerr << "파일을 찾을 수 없습니다" << endl;
        return 1;
    }

    int n;
    inputFile >> n; 
    inputFile.ignore();  

    vector<string> studentIDs;
    vector<string> firstNames;
    vector<string> lastNames;

    string id, firstName, lastName;
    for (int i = 0; i < total; i++) {
        inputFile >> id >> firstName >> lastName;
        studentIDs.push_back(id);
        firstNames.push_back(firstName);
        lastNames.push_back(lastName);
    }

    inputFile.close(); // 파일 닫기

    // 저장된 데이터 출력
    cout << "총 학생 수: " << total << endl;
    for (int i = 0; i < total; i++) {
        cout << "학번: " << studentIDs[i] 
             << ", First 이름: " << firstNames[i] 
             << ", Last 이름: " << lastNames[i] << endl;
    }

    return 0;
}
