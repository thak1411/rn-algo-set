#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
int vi[51];
int dp[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 19, 29, 39, 49, 59, 69, 79, 89, 189, 289, 389, 489, 589, 689, 789, 1789, 2789, 3789, 4789, 5789, 6789, 16789, 26789, 36789, 46789, 56789, 156789, 256789, 356789, 456789, 1456789, 2456789, 3456789, 13456789, 23456789, 123456789, -1, -1, -1, -1, -1 };
int query(int x, int c, int y) {
    if (c == y) return x;
    int res = 2147483647;
    for (int i = 1; i < 10; ++i) {
        if (vi[i]) continue;
        vi[i] = 1;
        res = std::min(res, query(x * 10 + i, c + i, y));
        vi[i] = 0;
    }
    return res;
}
int main() {
    int t;
    // for (int i = 1; i <= 50; ++i) printf("%d, ", query(0, 0, i));
    for (scanf("%d", &t); t--; ) {
        int n;
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}