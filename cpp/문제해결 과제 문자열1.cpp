//2024-05-01 문자열1) X'를 XR로 정의함
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 문자열 S의 가장 짧은 X 구하기
void shortestX(char* S, char* X) {
    int len = strlen(S);
    strcpy(X, S); 

    // 문자열 S을 뒤집은 문자열 R 구하기
    char R[len];
    for (int i = 0; i < len; i++) {
        R[i] = S[len - 1 - i];
    }

    // S자체가 팰랜드롬일때
    if(strcmp(X, R) == 0) {
        return;
    }
    
    // X 구하기
    for(int i = 0; i < len; i++) {
        strcpy(X, S); 
        strncpy(X + len, R + (len -1 -i), 1 + i); 

        int lenX = strlen(X);
        char XR[lenX];
        for (int i = 0; i < lenX; i++) {
            XR[i] = X[lenX - 1 - i];
        }

        if(strcmp(X, XR) == 0) {
            break;
        }
    }

}

int main() {
    char S[] = "BANANA";
    int len = strlen(S);
    char X[2 * len];

    shortestX(S,X);
    printf("%s의 X: %s\n", S, X);

    return 0;
}

