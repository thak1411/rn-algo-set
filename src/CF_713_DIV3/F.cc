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
ll ar[202001], br[202001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        ll n, c, res;
        scanf("%lld%lld", &n, &c);
        for (int i = 0; i < n; ++i) scanf("%lld", ar + i);
        for (int i = 0; i < n - 1; ++i) scanf("%lld", br + i);
        ll ddy = 0, cst = 0;
        res = c / ar[0] + !!(c % ar[0]);
        for (int i = 0; i < n - 1; ++i) {
            ll nc = (br[i] - cst);
            ddy += nc / ar[i] + !!(nc % ar[i]) + 1;
            cst += ar[i] * (nc / ar[i] + !!(nc % ar[i])) - br[i];
            
            ll xt = c - cst;
            res = std::min(res, ddy + xt / ar[i + 1] + !!(xt % ar[i + 1]));
        }
        printf("%lld\n", res);
    }
    return 0;
}