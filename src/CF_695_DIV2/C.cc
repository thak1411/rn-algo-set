#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
ll ar[3][300001];
ll s[3];
int main() {
    int n[3];
    ll res = 0;
    scanf("%d%d%d", n, n + 1, n + 2);
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n[i]; ++j) {
            scanf("%lld", ar[i] + j);
            s[i] += (ll)ar[i][j];
        }
        std::sort(ar[i], ar[i] + n[i]);
    }
    res = std::max(-s[0] + s[1] + s[2], std::max(-s[1] + s[0] + s[2], -s[2] + s[0] + s[1]));
    res = std::max(res, s[0] + s[1] + s[2] - 2LL * std::min(ar[0][0] + ar[1][0], std::min(ar[1][0] + ar[2][0], ar[2][0] + ar[0][0])));
    printf("%lld\n", res);
    return 0;
}