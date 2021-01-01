#include <algorithm>
#include <cstdio>
int r[1001], b[1001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, w = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) scanf("%1d", r + i);
        for (int i = 0; i < n; ++i) scanf("%1d", b + i);
        for (int i = 0; i < n; ++i) w += r[i] > b[i] ? 1 : r[i] == b[i] ? 0 : -1;
        if (w > 0) puts("RED");
        else if (w == 0) puts("EQUAL");
        else puts("BLUE");
    }
    return 0;
}