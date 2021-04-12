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
char str[200001];
int cnt;
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; ++i) {
	    str[cnt++] = i + 'a';
		for (int j = i; j--; ) {
			str[cnt++] = i + 'a';
			str[cnt++] = j + 'a';
		}
	}
	for (int i = 0; i < n; ++i) {
		if ((i / cnt) & 1) printf("%c", str[cnt - i % cnt - 1]);
		else printf("%c", str[i % cnt]);
	}
	puts("");
    return 0;
}