#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
ll a[100001];
ll b[100001];
int main() {
    int n;
    ll s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%lld", a + i);
    for (int i = 0; i < n; ++i) scanf("%lld", b + i);
    for (int i = 0; i < n; ++i) s += a[i] * b[i];
    puts(s ? "No" : "Yes");
    return 0;
}