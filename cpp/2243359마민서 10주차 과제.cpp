#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);
    int board[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    int dp[rows][cols];
    int path[rows][cols];
    dp[0][0] = board[0][0];
    path[0][0] = 1; // 시작점

    for (int i = 1; i < rows; i++) {
        dp[i][0] = dp[i - 1][0] + board[i][0];
        path[i][0] = 1; // 위에서 내려온 경우
    }
    for (int j = 1; j < cols; j++) {
        dp[0][j] = dp[0][j - 1] + board[0][j];
        path[0][j] = 2; // 왼쪽에서 오른쪽으로 이동한 경우
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            int top = dp[i - 1][j];
            int left = dp[i][j - 1];
            if (top > left) {
                dp[i][j] = top + board[i][j];
                path[i][j] = 1; // 위에서 내려온 경우
            } else {
                dp[i][j] = left + board[i][j];
                path[i][j] = 2; // 왼쪽에서 오른쪽으로 이동한 경우
            }
        }
    }

    printf("%d\n", dp[rows - 1][cols - 1]);

    // 이동 경로 출력
    int i = rows - 1;
    int j = cols - 1;
    while (i > 0 || j > 0) {
        board[i][j] = 1; // 현재 위치를 경로로 표시
        if (path[i][j] == 1)
            i--; // 위에서 내려온 경우
        else
            j--; // 왼쪽에서 오른쪽으로 이동한 경우
    }
    board[0][0] = 1; // 시작점

    // 경로 출력
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
