#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#define MOD 999999999989LL
typedef long long ll;
int ar[200001], dp[200001];
ll fact[200001];
// ll rnpow(ll x, ll y) {
//     if (y == 0) return 1;
//     if (y & 1) return rnpow(x, y - 1) * x % MOD;
//     ll res = rnpow(x, y >> 1LL);
//     return res * res % MOD;
// }
// ll fac(ll x) {
//     if (fact[x]) return fact[x];
//     return fact[x] = (x ? fac(x - 1) * x % MOD : 1);
// }
ll comb(ll n, ll r) {
    ll res = 1;
    for (ll i = n; i > n - r; --i) res *= i;
    for (ll i = 1; i <= r; ++i) res /= i;
    return res;
    // return fac(n) * rnpow(fac(r), MOD - 2) % MOD * rnpow(fac(n - r), MOD - 2) % MOD;
}
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, m, k;
        ll res = 0;
        scanf("%d", &n);
        k = 2; m = 3;
        for (int i = 0; i < n; ++i) scanf("%d", ar + i), dp[i] = 0;
        std::sort(ar, ar + n);
        for (int i = 0, j = 0; j < n; ) {
            if (i >= j || (j < n && ar[j] - ar[i] <= k)) ++j;
            else if (ar[j] - ar[i] > k) ++i;
            else break;
            dp[i] = j;
        }
        int pv = -1212;
        for (int i = 0; i < n; ++i) {
            if (dp[i] - i >= m) {
                res += comb(dp[i] - i, m);
                if (pv - i >= m) res -= comb(pv - i, m);
                pv = dp[i];
            }
        }
        printf("%lld\n", res);
    }
    return 0;
}