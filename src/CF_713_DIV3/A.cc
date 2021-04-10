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
int ar[101], ra[101];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, res = 0, idx = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            scanf("%d", ar + i);
            ra[i] = ar[i];
        }
        std::sort(ar + 1, ar + n + 1);
        if (ar[2] == ar[1]) res = ar[n];
        else res = ar[1];
        for (int i = 1; i <= n; ++i) {
            if (ra[i] == res) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}