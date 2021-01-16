#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
int ar[101];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, d, mx = 0;
        scanf("%d%d", &n, &d);
        for (int i = 0; i < n; ++i) {
            scanf("%d", ar + i);
        }
        std::sort(ar, ar + n);
        if (ar[0] + ar[1] <= d || ar[n - 1] <= d) puts("YES");
        else puts("NO");
    }
    return 0;
}