#include <algorithm>
#include <cstdio>
typedef long long ll;
ll a[200001], b[200001];
ll gcd(ll i, ll j) { return j ? gcd(j, i % j) : i; }
int main() {
    int n, m;
    ll agc;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) scanf("%lld", a + i);
    for (int i = 0; i < m; ++i) scanf("%lld", b + i);
    std::sort(a, a + n);
    agc = a[1] - a[0];
    for (int i = 2; i < n; ++i) agc = gcd(a[i] - a[0], agc);
    for (int i = 0; i < m; ++i) {
        printf("%lld ", n == 1 ? a[0] + b[i] : gcd(agc, a[0] + b[i]));
    }
    puts("");
    return 0;
}