#include <algorithm>
#include <iostream>
#include <utility>
#include <cstring>
#include <cassert>
#include <vector>
#include <cstdio>
#include <string>
#include <queue>
#define MOD 1000000007LL
typedef long long ll;
int dp[501];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        ll n, l, r, s, m;
        std::vector < ll > v;
        scanf("%lld%lld%lld%lld", &n, &l, &r, &s);
        for (int i = 1; i <= n; ++i) dp[i] = 0;
        m = r - l + 1;
        if (m * (m + 1) / 2LL > s) {
            puts("-1");
            continue;
        }
        ll sum = 0;
        for (ll i = 0; i < (r - l + 1); ++i) {
            v.push_back(i + 1);
            sum += i + 1;
            ++dp[i + 1];
        }
        ll N = n;
        for (int i = v.size(); i--; ) {
            if (sum < s) {
                if (N - v[i] + sum <= s) {
                    sum += N - v[i];
                    --dp[v[i]];
                    ++dp[N];
                    v[i] = N--;
                } else {
                    ll xt = s - sum;
                    --dp[v[i]];
                    v[i] += xt;
                    ++dp[v[i]];
                    sum += xt;
                    break;
                }
            } else break;
        }
        if (sum < s) {
            puts("-1");
            continue;
        }
        std::vector < int > ww;
        for (int i = 1; i <= n; ++i) {
            if (!dp[i]) ww.push_back(i);
        }
        int widx = 0;
        for (int i = 0; i < n; ++i) {
            if (i + 1 >= l && i + 1 <= r) printf("%lld ", v[i - l + 1]);
            else printf("%d ", ww[widx++]);
        }
        puts("");
    }
    return 0;
}