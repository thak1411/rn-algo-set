#include <algorithm>
#include <cstdio>
int ar[100001], dp[100001];
int main() {
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", ar + i);
    for (int i = 0; i < n; ++i) {
        int w = ar[i];
        res = std::max(res, ar[i]);
        for (int j = i + 1; j < n; ++j) {
            w = std::min(w, ar[j]);
            res = std::max(res, w * (j - i + 1));
            if (w * (n - i) <= res) break;
        }
    }
    printf("%d\n", res);
    return 0;
}