#include <iostream>

using namespace std;

// 静态成员变量

class Person {
public:
    // 1、所有对象都共享同一份数据
    // 2、编译阶段分配内存
    // 3、类内声明，类外初始化操作
    static int m_a;

    // 静态成员变量也是有访问权限的
private:
    static int m_b;
};

int Person::m_a = 100;
int Person::m_b = 200;
void test01()
{
    Person p;
    // 100;
    cout << p.m_a << endl;

    Person p2;
    p2.m_a = 200;

    // 200
    cout << p.m_a << endl;
}

void test02()
{
    // 静态成员变量，不属于某个对象上，所有对象都共享同一份数据
    // 因此静态成员变有两种访问方式：
    // 1、 通过对象进行访问
    /*Person p;
    cout << p.m_a << endl;*/
    // 2、通过类名进行访问
    cout << Person::m_a << endl;

    // cout << Person::m_b << endl; // 类外不可访问

}
int main()
{
    // test01();

    test02();
    system("pause");
    return 0;
}