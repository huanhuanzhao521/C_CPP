#include <iostream>
#include <string>
using namespace std;

// 类对象作为类成员

class Phone {
public:
    Phone(string pName)
    {
        cout << "Phone 的构造函数的调用" << endl;
        m_pname = pName;
    }
    ~Phone()
    {
        cout << "Phone 的析构函数的调用" << endl;
    }

    // 手机品牌名称
    string m_pname;
};

class Person {
public:
    // Phone m_phone = pname;  // 隐式转换法
    Person(string name, string pname):m_name(name),m_phone(pname) 
    {
        cout << "Person 的构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "Person 的析构函数的调用" << endl;
    }

    // 姓名
    string m_name;
    // 手机
    Phone m_phone;
};

// 当其他类对象作为本类成员，构造的时候先构造类对象，在构造自身；析构的顺序：和构造相反
void test01()
{
    Person p("张三","苹果MAX");
    cout << p.m_name << "使用的手机品牌是：" << p.m_phone.m_pname << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}