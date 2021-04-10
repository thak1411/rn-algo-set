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
ll ar[202020];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        ll sum = 0;
        scanf("%d", &n);
        for (int i = 0; i < n + 2; ++i) scanf("%lld", ar + i);
        std::sort(ar, ar + n + 2);
        for (int i = 0; i < n + 1; ++i) sum += ar[i];
        int idx = -1;
        for (int i = 0; i < n + 1; ++i) {
            if (sum - ar[i] == ar[n + 1]) idx = i;
        }
        if (~idx) {
            for (int i = 0; i < n + 1; ++i) {
                if (i != idx) printf("%lld ", ar[i]);
            }
            puts("");
            continue;
        }
        sum = 0;
        for (int i = 0; i < n; ++i) sum += ar[i];
        if (sum == ar[n]) {
            for (int i = 0; i < n; ++i) {
                printf("%lld ", ar[i]);
            }
            puts("");
            continue;
        }
        puts("-1");
    }
    return 0;
}