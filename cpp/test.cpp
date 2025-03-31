#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

struct Student {
    string id;
    string firstName;
    string lastName;
};

bool compareStudents(const Student &a, const Student &b) {
    return a.id < b.id;
}

int main() {
    ifstream inputFile("1.inp");
    ofstream outputFile("1.out");

    if (!inputFile || !outputFile) {
        cerr << "파일을 열 수 없습니다" << endl;
        return 1;
    }

    int total;
    inputFile >> total;
    inputFile.ignore();
    vector<Student> students;

    for (int i = 0; i < total; i++) {
        Student temp;
        inputFile >> temp.id >> temp.firstName >> temp.lastName;
        students.push_back(temp);
    }


    sort(students.begin(), students.end(), compareStudents);

  
    int maxFirstLength = 0;
    for (const auto &s : students) {
        maxFirstLength = max(maxFirstLength, (int)s.firstName.length());
    }

    for (const auto &s : students) {
        outputFile << s.id << " "
                   << setw(maxFirstLength) << left << s.firstName << " "  
                   << s.lastName << endl;
    }

    outputFile << endl; 

    map<string, int> lastNameCount;
    for (const auto &s : students) {
        lastNameCount[s.lastName]++;
    }


    for (const auto &entry : lastNameCount) {
        if (entry.second >= 2) { 
            outputFile << entry.first << " " << entry.second << endl;
        }
    }


    inputFile.close();
    outputFile.close();


    return 0;
}
