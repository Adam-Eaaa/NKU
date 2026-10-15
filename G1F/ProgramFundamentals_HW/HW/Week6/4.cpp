#include <iostream>
using namespace std;

int main() {
    int mark;
    string output[11] = {
        "不及格",
        "不及格",
        "不及格",
        "不及格",
        "不及格",
        "不及格",
        "及格",
        "及格",
        "良好",
        "优秀",
        "优秀"
    };
    cin >> mark;
    cout << output[mark / 10];
    return 0;
}