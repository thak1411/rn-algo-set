#include <algorithm>
#include <cstring>
#include <cstdio>
int ar[101];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, dp[2] = { 0, };
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", ar + i);
            ++dp[ar[i] == 1];
        }
        if (dp[1] % 2) puts("NO");
        else if (dp[1] && dp[0] % 2 == 1) puts("YES");
        else if (dp[1] % 2 == 0 && dp[0] % 2 == 0) puts("YES");
        else puts("NO");
    }
    return 0;
}