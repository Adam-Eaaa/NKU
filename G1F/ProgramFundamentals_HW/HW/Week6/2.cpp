#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x & 1 ? "奇数" : "偶数");
    return 0;
}