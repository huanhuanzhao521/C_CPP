#include <iostream>
#include <string>
using namespace std;

// 访问权限
// public
// protected  儿子可以访问父亲中的保护内容
// private    儿子不可以访问父亲中的私有内容

class Person
{
public:
    void func()
    {
        m_name = "张三";
        m_car = "拖拉机";
        m_Password = 123456;
    }
public:
    string m_name;
protected:
    string m_car;
private:
    int m_Password;
};

int main()
{
    Person p1;
    p1.m_name = "李四";
    // p1.m_car = "奔驰"; // 不可访问

    system("pause");
    return 0;
}