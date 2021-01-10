#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
int ar[1000000], r1, r2;
int query(int l, int r) {
    if (l == r) return l;
    int m = (l + r) / 2;
    int p = query(l, m);
    int q = query(m + 1, r);
    if (ar[p] < ar[q]) {
        r1 = q;
        r2 = p;
    }
    else {
        r1 = p;
        r2 = q;
    }
    return r1;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (1 << n); ++i) scanf("%d", ar + i);
    query(1, (1 << n));
    printf("%d\n", r2);
    return 0;
}