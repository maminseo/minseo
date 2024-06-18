#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main() {
    int N, NC;
    scanf("%d %d", &N, &NC);
    int coins[NC];
    for (int i = 0; i < NC; ++i) {
        scanf("%d", &coins[i]);
    }
    int cost[NC];
    int DP[N+1]; 

    for (int i = 0; i <= NC; i++) {
        DP[i] = INT_MAX;
    }
    DP[0] = 0;

    for (int i = 0; i < NC; i++) {
        for (int j = ; j <= N; j++) {
            if (j >= coins[i] && DP[j - coins[i]] != INT_MAX) {
                DP[j] = min(DP[j], DP[j - coins[i]] + 1);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    for (int i = 0; i < NC; ++i) {
        printf("\n%d: ", coins[i]);
        for(int j=1;j<=N;j++) {
            printf("%d ", DP[j]);
        }
    }
    return 0;
}