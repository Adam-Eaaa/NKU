// 程序设计基础——上机实习及习题集
// Chapter 1, 1.1
#include <cstdio>

int main( ) {
    int a = 0, b = 0;
    double div;
    scanf("%d%d", &a, &b);
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n", a, b, a + b, a, b, a - b, a, b, a * b);
    if (b == 0) printf("Err: Division by zero.\n");
    else {
        div = (double) a / b;
        printf("%d/%d=%lf\n", a, b, div);
    }
    return 0;
}