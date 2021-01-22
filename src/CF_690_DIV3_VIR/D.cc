#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
int ar[3001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, res, target = 0;
        scanf("%d", &n);
        res = n;
        for (int i = 0; i < n; ++i) scanf("%d", ar + i);
        for (int i = 0; i < n; ++i) {
            int c = 0, w = 0;
            target += ar[i];
            for (int j = 0; j < n; ++j) {
                c += ar[j];
                if (c == target) c = 0;
                if (c > target) {
                    w = 1000000;
                    break;
                }
                w += !!c;
            }
            if (!c) res = std::min(res, w);
        }
        printf("%d\n", res);
    }
    return 0;
}