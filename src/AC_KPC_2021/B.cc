#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
int a[300001], cnt[300001], res[300001];
int main() {
    int n, k;
    ll cn = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) scanf("%d", a + i);
    for (int i = 0; i < n; ++i) ++cnt[a[i]];
    res[0] = cnt[0];
    for (int i = 1; i < n; ++i) {
        res[i] = std::min(cnt[i], res[i - 1]);
        if (res[i] < k) cn += (ll)(res[i - 1] - res[i]) * (ll)(i);
    }
    printf("%lld\n", cn);
    return 0;
}