#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
char str[201], w[] = "2020";
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, f = 0, fw = 3;
        scanf("%d%s", &n, str);
        if (n < 4) {
            puts("NO");
            continue;
        }
        for (; f < 4 && str[f] == w[f]; ++f);
        for (; fw > -1 && str[n - 4 + fw] == w[fw]; --fw);
        if (f > fw || f == 4 || fw == -1) puts("YES");
        else puts("NO");
    }
    return 0;
}