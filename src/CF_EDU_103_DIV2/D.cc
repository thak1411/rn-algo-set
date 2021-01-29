#include <functional>
#include <algorithm>
#include <iostream>
#include <utility>
#include <cassert>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
#include <queue>
#include <cmath>
#include <map>
#include <set>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pld = pair<ld,ld>;
using vi = vector<int>;
using vll = vector<ll>;
using vld = vector<ld>;
using vpi = vector<pii>;
using vpl = vector<pll>;
#define INF 2147483647
#define HINF 987654321
#define FINF 1987654321
#define LLINF 9223372036854775807LL
#define f first
#define s second
#define sz(s) (int)(s).size()
#define pb push_back
#define FOR(i, b, e) for(int i=(b);i<(e);++i)
#define FORI(i, b, e) for(int i=(b);i>(e);--i)
#define FOREACH(i, t) for(auto&i:t)
#define SET(s, d, sz) for(int i=0;i<(sz);++i)s[i]=d;
#define GET(s, sz) for(int i=0;i<(sz);++i)cin>>s[i];
#define MOD 1000000007
template<typename T>bool amax(T& i, T j){return i<j?i=j,1:0;}
template<typename T>bool amin(T& i, T j){return i>j?i=j,1:0;}
ll rnmul(ll x,ll y){return 1LL*x*y%MOD;}
ll rnpow(ll x,ll y){ll res=1;for(;y;y>>=1LL){if(y&1LL)res=rnmul(res,x);x=rnmul(x,x);}return res;}
ll rnfac(ll x){if(x<1)return 1;ll res=1;for(;x;)res*=x--;return res;}
int dp[700001][2][2];
void solve() {
    int n;
    string s, ns = "-";
    cin >> n >> s;
    FOR(i, 0, n * 2 + 3) dp[i][0][0] = dp[i][0][1] = dp[i][1][0] = dp[i][1][1] = 0;
    FOREACH(i, s) ns += i + string("-");
    FOR(i, 2, sz(ns)) {
        if (ns[i] == '-') dp[i][0][0] += -~dp[i - 2][0][1] * (ns[i - 1] == 'L');
        if (ns[i] == '-') dp[i][0][1] += -~dp[i - 2][0][0] * (ns[i - 1] == 'R');
    }
    FORI(i, sz(ns) - 3, -1) {
        if (ns[i] == '-') dp[i][1][0] += -~dp[i + 2][1][1] * (ns[i + 1] == 'L');
        if (ns[i] == '-') dp[i][1][1] += -~dp[i + 2][1][0] * (ns[i + 1] == 'R');
    }
    FOR(i, 0, sz(ns)) {
        if (ns[i] == '-') {
            cout << dp[i][0][0] + dp[i][1][1] + 1 << ' ';
        }
    }
    cout << '\n';
}
int main() {
    int t;
    ios_base::sync_with_stdio(0); cin.tie(0);
    for (cin >> t; t--; ) solve();
    return 0;
}