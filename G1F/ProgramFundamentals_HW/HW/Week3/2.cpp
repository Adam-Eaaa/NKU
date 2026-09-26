#include <iostream>
#include <numbers>

#if _LIBCPP_STD_VER < 20
namespace std {
    namespace numbers {
        const double pi = 3.1415926535898;
    }
}
#endif

int main( ) {
    int r;
    scanf("%d", &r);
    printf("%.2lf", std :: numbers :: pi * 2 * r);
    return 0;
}