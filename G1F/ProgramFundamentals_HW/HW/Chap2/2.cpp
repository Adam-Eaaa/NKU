#include <iostream>
using namespace std;

int main( ) {
    const double C1 = 0.15, C2 = 0.96;
    double mINIT = 6880;
    double nH2SO4 = mINIT * C1;
    double mCONC = nH2SO4 / C2;
    cout << mCONC;
    return 0;
}