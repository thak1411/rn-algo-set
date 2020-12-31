#include <algorithm>
#include <cstdio>
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int x, y;
        scanf("%d%d", &x, &y);
        printf(" >> %d\n", std::max(x, y - 1) + std::max(x - 1, y));
    }
    return 0;
}