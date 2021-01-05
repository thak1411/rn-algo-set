#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
typedef long long ll;
ll ar[100001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        ll x, mn, mx = 0, s = 0;
        scanf("%d%lld", &n, &x);
        for (int i = 0; i < n; ++i) {
            scanf("%d", ar + i);
            s += ar[i];
            mx += ceil((double)ar[i] / x);
        }
        mn = ceil((double)s / x);
        printf("%lld %lld\n", mn, mx);
    }
    return 0;
}