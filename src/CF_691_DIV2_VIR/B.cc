#include <algorithm>
#include <cstdio>
int main() {
    int n, res = 0;
    scanf("%d", &n);
    printf("%.0lf\n", 1 + (double)( 3*n*(n + 4) + 2 - (n & 1 ? -1 : 1)*(n*(n + 4) + 2) )/8.);
    return 0;
}