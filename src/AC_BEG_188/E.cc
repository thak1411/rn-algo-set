#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
ll ar[200001];
ll dp[200001];
std::vector < int > ed[200001], de[200001];
int main() {
    int n, m;
    ll res = -9223372036854775807LL;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) scanf("%d", ar + i), dp[i] = -2147483647;
    for (int i = m; i--; ) {
        int p, q;
        scanf("%d%d", &p, &q); --p; --q; 
        ed[p].push_back(q);
        de[q].push_back(p);
    }
    dp[n - 1] = ar[n - 1];
    for (int i = n - 1; i--; ) {
        for (int j = 0; j < ed[i].size(); ++j) {
            dp[i] = std::max(dp[i], dp[ed[i][j]]);
            res = std::max(res, dp[i] - ar[i]);
        }
        dp[i] = std::max(dp[i], ar[i]);
    }
    printf("%lld\n", res);
    return 0;
}