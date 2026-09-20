// 程序设计基础——上机实习及习题集
// Chapter 1, 1.1
#include <iostream>
#include <ctime>
#include <chrono>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main( ) {
    string input;
    tm time_var;
    cout << "Enter time (YYYY-MM-DD HH:MM:SS)\n";
    if(!getline(cin, input))
        return 1;
    istringstream instream(input);
    instream >> get_time(&time_var, "%Y-%m-%d %H:%M:%S");
    if (instream.fail()) {
        cout << "Fail";
        return 1;
    }
    
    time_t flag = mktime(&time_var);
    time_t curr;
    time(&curr);
    
    auto secs = (int)curr - (int)flag;
    printf("Days:%d\tHours:%d\tMinutes:%d\tSeconds:%d\n", secs / (24*60*60), secs / (60*60), secs / (60), secs);
    return 0;
}