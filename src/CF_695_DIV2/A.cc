#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, t = 0;
        scanf("%d", &n);
        if (n == 1) puts("9");
        else if (n == 2) puts("98");
        else {
            printf("989");
            for (int i = 3; i < n; ++i) {
                printf("%d", t);
                t = (t + 1) % 10;
            }
            puts("");
        }
    }
    return 0;
}