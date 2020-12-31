#include <algorithm>
#include <cstdio>
#define MOD 998244353LL
typedef long long ll;
ll dp[200001];
ll rnpow(ll x, ll y) {
    if (y == 0) return 1;
    if (y & 1) return rnpow(x, y - 1) * x % MOD;
    ll res = rnpow(x, y >> 1LL);
    return res * res % MOD;
}
int main() {
    int n;
    ll x = 0, y = 0;
    scanf("%d", &n);
    y = rnpow(2, n);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; ++i) dp[i] = (dp[i - 1] + dp[i - 2]) % MOD; x = dp[n];
    printf("%lld\n", x * rnpow(y, MOD - 2) % MOD);
    return 0;
}