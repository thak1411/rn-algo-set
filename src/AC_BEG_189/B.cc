#include <cstdio>
int main() {
    int n, x, res = -1;
    double w = 0;
    scanf("%d%d", &n, &x); x *= 100;
    for (int i = 0; i < n; ++i) {
        int p, q;
        scanf("%d%d", &p, &q);
        w += p * q;
        if (w > x) {
            res = i + 1;
            break;
        }
    }
    printf("%d\n", res);
    return 0;
}