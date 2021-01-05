#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
typedef long long ll;
ll c[300001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, m;
        std::vector < ll > v;
        ll res = 0;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; ++i) {
            ll k;
            scanf("%lld", &k);
            v.push_back(k - 1);
        }
        for (int i = 0; i < m; ++i) scanf("%lld", c + i);
        std::sort(v.begin(), v.end(), [] (ll i, ll j) { return i > j; });
        int ct = 0;
        for (int i = 0; i < n; ++i) {
            ll& x = v[i];
            if (ct >= m || c[x] <= c[ct]) {
                res += c[x];
            } else {
                res += c[ct++];
            }
        }
        printf("%lld\n", res);
    }
    return 0;
}