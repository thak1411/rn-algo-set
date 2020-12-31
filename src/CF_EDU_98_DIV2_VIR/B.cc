#include <algorithm>
#include <cstdio>
int ar[200001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        long long mx = 0, s = 0, ts = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", ar + i);
            s += ar[i];
            mx = std::max((long long)ar[i], mx);
        }
        long long l = 0, r = 2e9;
        for (; l < r; ) {
            long long mid = (l + r) / 2LL;
            if (mx * (n - 1) + mid * (n - 1) < s) l = mid + 1;
            else r = mid;
        }
        ts = l * (n - 1);
        printf("%lld\n", mx * (n - 1) + ts - s);
    }
    return 0;
}