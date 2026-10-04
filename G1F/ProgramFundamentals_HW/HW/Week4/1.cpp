#include <stdio.h>

int main( ) {
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a, a = b, b = t;
    // a ^= b ^= a ^= b;
    printf("%d %d", a, b);
    return 0;
}