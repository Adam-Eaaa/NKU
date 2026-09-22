#include <iostream>
using namespace std;

int main( ) {
    double radius = 0, height = 0, area = 0, volume = 0;
    const double PI = 3.14;
    scanf("%lf%lf", &radius, &height);
    area = PI * 2 * radius * (radius + height);
    volume = PI * radius * radius * height;
    printf("Area: %.3lf\tVolume: %.3lf\n", area, volume);
    return 0;
}