#include <algorithm>
#include <cstdio>
typedef long long ll;
char str[11];
int ar[111], n;
ll dp[111][2];
ll query(int x, int y) {
    if (x == -1) return 1;
    if (dp[x][y]) return dp[x][y];
    if (ar[x] == 1) {
        if (y) return dp[x][y] = query(x - 1, 0) + query(x - 1, 1) * 2;
        else return dp[x][y] = query(x - 1, 0);
    } else {
        if (y) return dp[x][y] = query(x - 1, 1);
        else return dp[x][y] = query(x - 1, 1) + query(x - 1, 0) * 2;
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", str);
        if (str[0] == 'O') ar[i] = 1;
        else ar[i] = 2;
    }
    printf("%lld\n", query(n - 1, 1));
    return 0;
}