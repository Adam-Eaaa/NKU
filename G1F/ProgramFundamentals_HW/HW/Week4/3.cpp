#include <stdio.h>

int main( ) {
    int x = 3, y = 4, z1, z2, z3;
    z1 = x++ * --y;
    z2 = ++x - y--;
    z3 = x-- + y--;
    printf("%d %d %d %d %d", x, y, z1, z2, z3);
    return 0;
}