#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
ll a[200001], b[200001], c[200001], da[200001], db[200001];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", a + i);
    for (int i = 0; i < n; ++i) scanf("%d", b + i);
    c[0] = a[0] * b[0];
    da[0] = a[0];
    db[0] = b[0];
    printf("%lld\n", c[0]);
    for (int i = 1; i < n; ++i) {
        da[i] = std::max(da[i - 1], a[i]);
        c[i] = std::max(da[i] * db[i], a[i] * db[i]);
        c[i] = std::max(c[i], da[i] * b[i]);
        c[i] = std::max(c[i], c[i - 1]);
        c[i] = std::max(c[i], a[i] * b[i]);
        db[i] = std::max(db[i - 1], b[i]);
        printf("%lld\n", c[i]);
    }
    return 0;
}