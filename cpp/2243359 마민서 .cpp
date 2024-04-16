#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int promise(int row, int col) {
    int i;
    if(row>=MAX || col>=MAX) {
        return 0;
    }
    else{
        for (i=1;row-i>=0;i++) {
            if(chess[row-i][col]==1)
                return 0;
            else if(col-i>=0 && chess [row-i][col-i]==1)
                return 0;
            else if(col+i<MAX && chess [row-i][col+i]==1)
                return 0;
        }
    }
    return 1;
}
void queen(int row){
    int i;
    if (row == MAX) {
        cnt++;
        prt()
    }
    if (row < MAX) {
        for (i=0;i<MAX;i++) {
            if (promise(row, i) {
                chess[row][i] = 1;
                queen(row+1);
                chess[row][i] = 0;
            }
        }
    }      
}