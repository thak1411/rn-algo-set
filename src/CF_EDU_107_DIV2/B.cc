#include <algorithm>
#include <iostream>
#include <utility>
#include <cstring>
#include <cassert>
#include <vector>
#include <random>
#include <cstdio>
#include <string>
#include <queue>
#include <tuple>
#define MOD 1000000007LL
typedef long long ll;
int dp[1000001], pr[1000001], pl[1000001], pc;
int ipow(int i) {
	return i > 1 ? ipow(i - 1) * 10 : 1;
}
std::vector < int > v[11];
int main() {
	int t;
	v[1].push_back(3);
	v[1].push_back(5);
	v[2].push_back(11);
	v[2].push_back(13);
	v[3].push_back(179);
	v[3].push_back(191);
	v[4].push_back(1087);
	v[4].push_back(1097);
	v[5].push_back(11939);
	v[5].push_back(16127);
	v[6].push_back(193939);
	v[6].push_back(199933);
	v[7].push_back(1000003);
	v[7].push_back(1000033);
	v[8].push_back(10000019);
	v[8].push_back(10000169);
	v[9].push_back(102345689);
	v[9].push_back(102345697);
	for (scanf("%d", &t); t--; ) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a == c) printf("%d ", ipow(c));
		else printf("%d ", v[a - c + 1][0] * ipow(c));
		if (b == c) printf("%d ", ipow(c));
		else printf("%d ", v[b - c + 1][1] * ipow(c));
		puts("");
	}
    return 0;
}