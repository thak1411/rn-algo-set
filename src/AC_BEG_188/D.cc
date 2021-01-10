#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
ll ar[200001][3];
struct Node {
    ll p, i, q;
};
int main() {
    int n;
    ll res = 0, c, s = 0, w = 0;
    std::vector < Node > v;
    scanf("%d%lld", &n, &c);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%lld", ar[i] + j);
        }
        v.push_back({ ar[i][0], i, 1 });
        v.push_back({ ar[i][1] + 1, i, -1 });
    }
    std::sort(v.begin(), v.end(), [](Node i, Node j) {
        return i.p == j.p ? i.q < j.q : i.p < j.p;
    });
    for (int i = 0; i < v.size(); ++i) {
        if (v[i].q == 1) {
            w += ar[v[i].i][2];
            ++s;
        } else {
            w -= ar[v[i].i][2];
            --s;
        }
        ll ln = i + 1 == v.size() ? 0 : v[i + 1].p - v[i].p;
        res += ln * std::min(w, c);
    }
    printf("%lld\n", res);
    return 0;
}