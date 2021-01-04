#include <algorithm>
#include <cstring>
#include <cstdio>
int ar[200001], dp[200001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, res = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) scanf("%d", ar + i);
        for (int i = n; i--; ) {
            dp[i] = i + ar[i] >= n ? ar[i] : dp[i + ar[i]] + ar[i];
            res = std::max(res, dp[i]);
        }
        printf("%d\n", res);
    }
    return 0;
}