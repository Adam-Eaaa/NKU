#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    x1 = -b / (2 * a);
    if (delta > 0) {
        x2 = x1 + sqrt(delta) / (2 * a);
        x1 = x1 - sqrt(delta) / (2 * a);
        printf("x1=%lf, x2=%lf", x1, x2);
    }
    else if (delta == 0) {
        printf("x1=x2=%lf", x1);
    }
    else {
        x2 = sqrt(-delta) / (2 * a);
        printf("x1=%lf-%lfi, x2=%lf+%lfi", x1, x2, x1, x2);
    }
    return 0;
}