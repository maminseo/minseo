#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "4+3*3/2와 같이 사칙연산을 입력하세요." << endl;
    getline(cin, s, '\n'); 

    int result = 0;
    int startIndex = 0; 
    char lastOperator = '+';

    while(true) {
        int fIndex = s.find_first_of("+-*/", startIndex);
        
        if(fIndex == -1) {
            string part = s.substr(startIndex);
            if(part != "") {
				cout << part << endl;
				if (lastOperator == '*') {
                    result *= stoi(part);
                }
				else if (lastOperator == '/') {
                    result /= stoi(part);
                }
                else if (lastOperator == '+') {
                    result += stoi(part);
                } 
				else if (lastOperator == '-') {
                    result -= stoi(part);
				}
            break;
        	}
		}
        
        int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);
		cout << part << endl;
        if (lastOperator == '*') {
            result *= stoi(part);
        } 
		else if (lastOperator == '/') {
            result /= stoi(part);
        }
		else if (lastOperator == '+') {
            result += stoi(part);
        } 
		else if (lastOperator == '-') {
            result -= stoi(part);
        } 

        lastOperator = s[fIndex];
        startIndex = fIndex + 1;
    	
	}

    cout << "사칙연산 결과는 " << result;

    return 0;

}
