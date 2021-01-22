#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
ll ar[301], ra[301];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) scanf("%d", ar + i);
        for (int i = 0; i < (n + 1) / 2; ++i) ra[i * 2] = ar[i];
        for (int i = 0; i < n / 2; ++i) ra[i * 2 + 1] = ar[n - i - 1];
        for (int i = 0; i < n; ++i) printf("%lld ", ra[i]);
        puts("");
    }
    return 0;
}