#include <algorithm>
#include <iostream>
#include <utility>
#include <cstring>
#include <cassert>
#include <vector>
#include <cstdio>
#include <string>
#include <queue>
#define MOD 1000000007LL
typedef long long ll;
char str[202020];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int a, b, l, r, f = 1;
        scanf("%d%d%s", &b, &a, str);
        std::vector < std::pair < int, int > > v;
        std::vector < int > w;
        l = 0; r = strlen(str) - 1;
        for (; l <= r; ++l, --r) {
            if (l == r) {
                if (str[l] == '?') w.push_back(l);
                else if (str[l] == '1') f &= a-- > 0;
                else f &= b-- > 0;
            } else if (str[l] != '?' && str[r] != '?') {
                f &= str[l] == str[r];
                if (str[l] == '1') {
                    f &= a > 1;
                    a -= 2;
                } else {
                    f &= b > 1;
                    b -= 2;
                }
            } else if (str[l] == '?' && str[r] != '?') {
                if (str[r] == '1') {
                    f &= a > 1;
                    a -= 2;
                    str[l] = '1';
                } else {
                    f &= b > 1;
                    b -= 2;
                    str[l] = '0';
                }
            } else if (str[l] != '?' && str[r] == '?') {
                if (str[l] == '1') {
                    f &= a > 1;
                    a -= 2;
                    str[r] = '1';
                } else {
                    f &= b > 0;
                    b -= 2;
                    str[r] = '0';
                }
            } else {
                v.push_back({ l, r });
            }
        }
        for (auto [l, r] : v) {
            if (a > 1) str[l] = str[r] = '1', a -= 2;
            else if (b > 1) str[l] = str[r] = '0', b -= 2;
            else f = 0;
        }
        for (auto it : w) {
            if (a) str[it] = '1', --a;
            else if (b) str[it] = '0', --b;
            else f = 0;
        }
        f &= !a && !b;
        if (f) {
            puts(str);
        } else puts("-1");
    }
    return 0;
}