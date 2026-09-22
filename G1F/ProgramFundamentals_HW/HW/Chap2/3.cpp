#include <iostream>
#include <string>
using namespace std;

int main( ) {
    string pwd = "";
    bool clf[4] = {false, false, false, false}; // Lower; Upper; Digit; Special
    getline(cin, pwd);
    for(auto i = pwd.begin(); i < pwd.end(); i++) {
        if((char)*i >= '0' && (char)*i <= '9') 
            clf[2] = true;
        else if((char)*i >= 'a' && (char)*i <= 'z')
            clf[0] = true;
        else if((char)*i >= 'A' && (char)*i <= 'Z')
            clf[1] = true;
        else
            clf[3] = true;
    }
    if(pwd.length() < 6)
        memset(clf, 0, 4);
    switch(clf[0]+clf[1]+clf[2]+clf[3]) {
        case 0:
            printf("密码长度不足6位! 属于极弱密码, 建议至少设置6位喵~");
            break;
        case 1:
            printf("密码太弱了喵! 只有一种字符类型, 小心被黑草姬盗走喵!");
            break;
        case 2:
            printf("密码强度中等, 建议增加一些字符类型增加防御力喵~");
            break;
        case 3:
            printf("密码强度很强喵! Ciallo～(∠・ω< )⌒★");
            break;
        case 4: default:
            printf("雏草姬密码强度爆表了喵! 黑草姬打喵拳也攻不破喵~");
    }
    return 0;
}