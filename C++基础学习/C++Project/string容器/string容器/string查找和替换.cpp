#include <iostream>
#include <string>

using namespace std;

/*
Int find(const string& str,int pos =0) const;    //查找str第一次出现位置，从pos开始查找
Int find(const char* s,int pos =0) const;       //查找s第一次出现位置，从pos开始查找
Int find(const char* s,int pos,int n) const;     //从pos位置查找s的前n个字符第一次位置
Int find(const char c,int pos=0) const;         //查找字符c第一次出现位置
Int rfind(const string& str,int pos =npos) const; //查找str最后一次位置，从pos开始查找
Int rfind(const char* s,int pos =npos) const;  // 查找s最后一次出现位置，从pos开始查找
Int rfind(const char* s,int pos,int n) const;  //从pos位置查找s的前n个字符最后一次位置
Int rfind(const char c,int pos=0) const;    // 查找字符c最后一次出现位置
String& replace(int pos,int n,const string& str);  //替换从pos开始n个字符为字符串str
String& replace(int pos,int n,const char* s);  //替换从pos开始的n个字符为字符串s

*/
// 查找
void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    if (pos == -1) {
        cout << "未找到字符串" << endl;
    } else {
        cout << "找到了字符串，位置 pos = " << pos << endl;
    }

    // rfind 和 find
    // rfind 从右往左查找，find从左往右查找
    int pos2 = str1.rfind("de");
    cout << "pos2 = " << pos2 << endl;
    
}

// 替换
void test02()
{
    string str = "abcdefg";
    // 从1号位置起，3个字符 替换为 "1111"
    str.replace(1, 3, "1111");
    cout << "str = " << str << endl;
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}