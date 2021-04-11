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
int ar[202020];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, k;
        scanf("%d%d", &n, &k);
        if (!k) {
            for (int i = 1; i <= n; ++i) printf("%d ", i);
            puts("");
            continue;
        }
        if (n < 3) {
            puts("-1");
            continue;
        }
        if ((n - 3) / 2 + 1 < k) {
            puts("-1");
            continue;
        }
        int l = 1, r = n;
        for (; k--; ) {
            printf("%d %d ", l++, r--);
            if (l == r) printf("%d ", r--);
        }
        for (; r >= l; ) printf("%d ", r--);
        puts("");
    }
    return 0;
}