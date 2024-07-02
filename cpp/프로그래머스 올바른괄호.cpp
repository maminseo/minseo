#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int stack = 0;

    for(int i=0; i<s.size(); i++) {
        if(s[i]=='(') {
            stack += 1;
        }
        else if(s[i]==')') {
            if(stack != 0) stack -= 1;
            else answer = false;
        }
        else answer = false;
    }
    
    if(stack != 0) answer = false;
    return answer;
}

int main() {
    string s;
    cin >> s;
    cout << solution(s) << endl;
}