#include <iostream>
using namespace std;

// 没错, 实现原理是 快速写(龟速乘(快速读(), 快速读()))
// 只是因为写成一行看着很爽 ( )
// 那为什么还要专门写龟速乘？
// 别管，就说能不能跑吧

inline int read( ) {
    int res = 0;
    bool symb = true;
    char buffer = getchar();
    while (buffer < '0' || buffer > '9') {
        if (buffer == '-') symb = !symb;
        buffer = getchar();
    }
    while (buffer >= '0' && buffer <= '9') {
        res = res * 10 + buffer - '0';
        buffer = getchar();
    }
    return (symb? res : -res);
}

void write(int buffer) {
    if (buffer < 0) {
        putchar('-');
        buffer = -buffer;
    }
    if (buffer > 9) {
        write(buffer / 10);
    }
    putchar(buffer % 10 + '0');
}

int mult(int base, int idx) {
    int result;
    if (idx < 0) {
        base = -base;
        idx = - idx;
    }
    if (idx == 0) 
        return 0;
    result = mult(base, idx >> 1);
    if (idx % 2)
        result = result + result + base;
    else
        result = result + result;
    return result;
}

int main( ) {
    write(mult(read(), read()));
    return 0;
}