#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;
}

// 实用操作
void test02()
{
    string email = "zhangsan@sina.com";

    // 从邮件地址中 获取 用户名信息
    int pos = email.find("@");
    string userName = email.substr(0, pos);
    cout << "用户名：" << userName << endl;

}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}