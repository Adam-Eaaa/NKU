#include <stdio.h>

int main( ) {
    float x = 2.5, y = 4.7;
    int a = 7;
    float w = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%f", w);
    return 0;
}