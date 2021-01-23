#include <cstdio>
char str[4];
int main() {
    scanf("%s", str);
    puts(str[0] == str[1] && str[1] == str[2] ? "Won" : "Lost");
    return 0;
}