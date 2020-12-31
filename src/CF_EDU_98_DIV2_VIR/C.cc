#include <algorithm>
#include <cstdio>
char str[200001];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        scanf("%s", str);
        int a = 0, b = 0, res = 0;
        for (int i = 0; str[i]; ++i) {
            if (str[i] == '(') ++a;
            if (str[i] == '[') ++b;
            if (str[i] == ')') {
                res += !!a;
                a = std::max(a - 1, 0);
            }
            if (str[i] == ']') {
                res += !!b;
                b = std::max(b - 1, 0);
            }
        }
        printf("%d\n", res);
    }
    return 0;
}