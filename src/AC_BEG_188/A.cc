#include <algorithm>
#include <utility>
#include <cstring>
#include <cstdio>
#include <vector>
#include <string>
typedef long long ll;
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    puts(std::min(x, y) + 3 > std::max(x, y) ? "Yes" : "No");
    return 0;
}