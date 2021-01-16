#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
typedef long long ll;
int main() {
    int t;
    for (scanf("%d", &t); t--; ) {
        std::vector < int > v;
        int n, k;
        scanf("%d%d", &n, &k);
        for (int i = 0; i < k; ++i) v.push_back(i + 1);
        for (int i = 1; i < k - (n - k); ++i) printf("%d ", i);
        for (int i = k; i >= k - (n - k); --i) printf("%d ", i);
        puts("");
    }
    return 0;
}