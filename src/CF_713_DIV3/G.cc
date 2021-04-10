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
#define N 200001
int dp[N + 100];
int main() {
    int t;
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            dp[j] += i;
        }
    }
    for (scanf("%d", &t); t--; ) {
        int n, res = -1;
        scanf("%d", &n);
        for (int i = 1; i < N; ++i) {
            if (dp[i] == n) {
                res = i;
                break;
            }
        }
        printf(" >> %d\n", res);
    }
    return 0;
}