#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
char ss[22], tt[22];
int gcd(int i, int j) {
    return j ? gcd(j, i % j) : i;
}
int lcm(int i, int j) {
    return i * j / gcd(i, j);
}
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        scanf("%s%s", ss, tt);
        std::string s, t, a, b;
        s = ss; t = tt;
        int lm = lcm(s.size(), t.size());
        for (int i = 0; i < lm; i += s.size()) {
            a += s;
        }
        for (int i = 0; i < lm; i += t.size()) {
            b += t;
        }
        if (a == b) printf("%s\n", a.c_str());
        else puts("-1");
    }
    return 0;
}