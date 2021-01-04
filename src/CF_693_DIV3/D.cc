#include <algorithm>
#include <cstring>
#include <cstdio>
typedef long long ll;
ll ar[200001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) scanf("%lld", ar + i);
        std::sort(ar, ar + n, [] (ll i, ll j) {
            return i > j;
        });
        ll dp[2] = { 0, };
        for (int i = 0; i < n; ++i) {
            if (i & 1) {
                if (ar[i] % 2 == 1) dp[i & 1] += ar[i];
            } else {
                if (ar[i] % 2 == 0) dp[i & 1] += ar[i];
            }
        }
        puts(dp[0] < dp[1] ? "Bob" : dp[0] == dp[1] ? "Tie" : "Alice");
    }
    return 0;
}