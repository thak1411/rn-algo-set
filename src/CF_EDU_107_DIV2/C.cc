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
int ar[300001], ti[51];
int main() {
	int n, q;
	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; ++i) {
		scanf("%d", ar + i);
		if (!ti[ar[i]]) ti[ar[i]] = i + 1;
	}
	for (int j = 0; j < q; ++j) {
		int qr;
		scanf("%d", &qr);
		printf("%d ", ti[qr]);
		int tmp = ti[qr];
		ti[qr] = 1;
		for (int j = 1; j <= 50; ++j) {
			if (j == qr) continue;
			if (ti[j] && ti[j] < tmp) ++ti[j];
		}
	}
	puts("");
    return 0;
}