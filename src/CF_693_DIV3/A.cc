#include <cstdio>
int query(int x, int y) {
    if ((x & 1) == 0 && (y & 1) == 0) return query(x >> 1, y >> 1) * 4;
    if ((x & 1) == 0) return query(x >> 1, y) * 2;
    if ((y & 1) == 0) return query(x, y >> 1) * 2;
    return 1;
}
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int w, h, n;
        scanf("%d%d%d", &w, &h, &n);
        if (query(w, h) >= n) puts("YES");
        else puts("NO");
    }
    return 0;
}