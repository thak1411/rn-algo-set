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
char str[401][401];
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n;
        memset(str, 0, sizeof str);
        std::vector < std::pair < int, int > > v;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf(" %c", str[i] + j);
                if (str[i][j] == '*') v.push_back({ i, j });
            }
        }
        int x, y;
        std::sort(v.begin(), v.end());
        if (v[0].first == v[1].first) {
            int sign;
            if (v[0].first + 1 < n) {
                sign = 1;
            } else {
                sign = -1;
            }
            x = v[0].first + sign;
            y = v[0].second;
            str[x][y] = '*';
            y = v[1].second;
            str[x][y] = '*';
        } else if (v[0].second == v[1].second) {
            int sign;
            if (v[0].second + 1 < n) {
                sign = 1;
            } else {
                sign = -1;
            }
            x = v[0].first;
            y = v[0].second + sign;
            str[x][y] = '*';
            x = v[1].first;
            str[x][y] = '*';
        }
        x = v[0].first, y = v[1].second;
        str[x][y] = '*';
        x = v[1].first, y = v[0].second;
        str[x][y] = '*';
        for (int i = 0; i < n; ++i) {
            printf("%s\n", str[i]);
        }
    }
    return 0;
}