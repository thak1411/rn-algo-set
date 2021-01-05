#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>
typedef long long ll;
std::vector < int > ed[300001];
std::vector < int > v, w;
int mem[300001], dp[300001];
int dfs(int x) {
    if (mem[x]++) return 0;
    int res = 1;
    for (int i = 0; i < ed[x].size(); ++i) res += dfs(ed[x][i]);
    return res;
}
void dfs2(int x, int f) {
    if (f && dp[x]++) return;
    if (f) v.push_back(x);
    for (int i = 0; i < ed[x].size(); ++i) {
        dp[ed[x][i]] |= f;
    }
    for (int i = 0; i < ed[x].size(); ++i) {
        if (dp[ed[x][i]]) continue;
        if (f) dfs2(ed[x][i], 0);
        else dfs2(ed[x][i], 1);
    }
}
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        int n, m;        
        scanf("%d%d", &n, &m);
        v.clear(); w.clear();
        for (int i = 1; i <= n; ++i) {
            ed[i].clear();
            dp[i] = mem[i] = 0;
            w.push_back(i);
        }
        for (int i = 1; i <= m; ++i) {
            int p, q;
            scanf("%d%d", &p, &q);
            ed[p].push_back(q);
            ed[q].push_back(p);
        }
        if (dfs(1) != n) {
            puts("NO");
            continue;
        }
        std::sort(w.begin(), w.end(), [&] (int i, int j) {
            return ed[i].size() > ed[j].size();
        });
        // for (int i = 0; i < n; ++i) {
        //     if (dp[w[i]]) continue;
        //     dfs2(w[i]);
        //     v.push_back(w[i]);
        // }
        dfs2(w[0], 1);
        printf("YES\n%lu\n", v.size());
        for (int i = 0; i < v.size(); ++i) printf("%d ", v[i]);
        puts("");
    }
    return 0;
}