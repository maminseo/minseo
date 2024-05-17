#include <stdio.h>
#include <stdlib.h>

// 최대 함수
int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int rows, cols;

    // 행과 열의 수 입력 받기
    printf("행과 열의 수를 입력하세요: ");
    scanf("%d %d", &rows, &cols);

    // 보드 생성 및 입력 받기
    int board[rows][cols];
    printf("보드의 값을 입력하세요 (0 또는 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    // dp 배열 생성 및 초기화
    int dp[rows][cols];
    int path[rows][cols]; // 로봇의 이동 경로를 나타내는 배열
    dp[0][0] = board[0][0];
    path[0][0] = 1; // 시작 위치를 경로에 포함시킴
    for (int i = 1; i < rows; i++) {
        dp[i][0] = dp[i - 1][0] + board[i][0];
        path[i][0] = board[i][0] == 0 ? 0 : 1; // 왼쪽에서 오는 경우를 경로에 포함시킴
    }
    for (int j = 1; j < cols; j++) {
        dp[0][j] = dp[0][j - 1] + board[0][j];
        path[0][j] = board[0][j] == 0 ? 0 : 1; // 위에서 오는 경우를 경로에 포함시킴
    }

    // 나머지 dp 값 및 경로 계산
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            int top = dp[i - 1][j];
            int left = dp[i][j - 1];
            if (top > left) {
                dp[i][j] = top + board[i][j];
                path[i][j] = board[i][j] == 0 ? 0 : 1; // 위에서 오는 경우를 경로에 포함시킴
            } else {
                dp[i][j] = left + board[i][j];
                path[i][j] = board[i][j] == 0 ? 0 : 1; // 왼쪽에서 오는 경우를 경로에 포함시킴
            }
        }
    }

    // 최대 점수 출력
    printf("최대 점수: %d\n", dp[rows - 1][cols - 1]);

    // 로봇의 이동 경로 출력
    printf("로봇의 이동 경로:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", path[i][j]);
        }
        printf("\n");
    }

    return 0;
}
