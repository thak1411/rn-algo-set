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
int ar[222];
int main() {
	int t;
	for (scanf("%d", &t); t--; ) {
		int n, res = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", ar + i);
			res += ar[i] == 1 || ar[i] == 3;
		}
		printf("%d\n", res);
	}
    return 0;
}