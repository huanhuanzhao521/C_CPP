#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(int age, string name)
    {
        this->m_age = age;
        this->m_name = name;
    }
    int m_age;
    string m_name;
};
// 对比两个数据是否相等
template <typename T>
bool myCompare(T &a, T &b)
{
    if (a == b) {
        return true;
    }
    return false;
}

// 利用具体化的Person版本实现代码，具体化优先调用
template <> bool myCompare(Person& p1, Person& p2)
{
    if (p1.m_age == p2.m_age && p1.m_name == p2.m_name) {
        return true;
    }
    return false;
}

void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if (ret) {
        cout << "a == b" << endl;
    } else {
        cout << "a != b" << endl;
    }
    
}

void test02()
{
    Person p1(10,"Tom");
    Person p2(20, "Tom");
    bool ret = myCompare(p1, p2);
    if (ret) {
        cout << "p1 == p2" << endl;
    }
    else {
        cout << "p1 != p2" << endl;
    }
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}