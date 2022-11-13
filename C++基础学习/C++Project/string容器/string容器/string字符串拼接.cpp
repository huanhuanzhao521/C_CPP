#include <iostream>
#include <string>

using namespace std;

/*
String& operator+=(const char* str)       // 重载+=操作符
 String& operator+=(const char c)         //载+=操作符
 String& operator+=(const string& str);     //载+=操作符
 String& append(const char* s)     //把字符串s连接到当前字符串结尾
 String& append(const char* s,int n) // 把字符串s的前n个字符连接到当前字符串结尾
 String& append(const string& s)    //同operator+=(const string& str)
 String& append(const string& s,int pos,int n)       //字符串s中pos位置开始的n个字符连接到字符串结尾；

*/

void test01()
{
    string str1 = "我";
    str1 += "不爱玩游戏";
    cout << "str1 = " << str1 << endl;

    str1 += ":";
    cout << "str1 = " << str1 << endl;

    string str2 = "LoL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I ";
    str3.append("love ");
    cout << "str3 = " << str3 << endl;

    str3.append("game abcdef", 5);
    cout << "str3 = " << str3 << endl;

    str3.append(str2);
    cout << "str3 = " << str3 << endl;

    //str3.append(str2, 0, 3); // 只截取到lol
    //cout << "str3 = " << str3 << endl;

    str3.append(str2, 4, 3); // 只截取到DNF,参数2 从哪个位置开始截取，参数3 截取字符的个数
    cout << "str3 = " << str3 << endl;

}

int main()
{
    test01();
    system("pause");
    return 0;
}