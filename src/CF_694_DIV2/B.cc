#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
typedef long long ll;
ll ar[3000001][2];
ll query(ll q, ll x) {
    if (q % x) return q;
    return query(q / x, x) * x + q;
}
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        ll x, res = 0;
        scanf("%d%lld", &n, &x);
        for (int i = 0; i < n; ++i) {
            scanf("%lld", ar[i]);
            ar[i][1] = 1;
        }
        int i;
        for (i = 0; i < n; ++i) {
            if (ar[i][0] % x) break;
            res += ar[i][0] * ar[i][1];
            ar[n][0] = ar[i][0] / x;
            ar[n++][1] = x * ar[i][1];
        }
        for (; i < n; ++i) res += ar[i][0] * ar[i][1];
        printf("%lld\n", res);
    }
    return 0;
}