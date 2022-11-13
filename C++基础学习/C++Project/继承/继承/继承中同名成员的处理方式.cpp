#include <iostream>

using namespace std;

class Base {
public:
    Base()
    {
        m_a = 100;
    }
    void func()
    {
        cout << "Base func 的调用." << endl;
    }
    void func(int a)
    {
        cout << "Base func(int a) 的调用." << endl;
    }
    int m_a;
};

class Son :public Base {
public:
    Son()
    {
        m_a = 200;
    }

    void func()
    {
        cout << "Son func 的调用." << endl;
    }
    int m_a;
};
void test01()
{
    Son s;
    cout << "Son m_a = " << s.m_a << endl;

    // 如果通过子类对象访问父类中的同名成员，需要加作用域；
    cout << "Base m_a = " << s.Base::m_a << endl;
}

void test02()
{
    Son s2;
    s2.func(); // 直接调用，调用的是子类中的同名成员；

    s2.Base::func();

    // s2.func(100);  // 如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有同名的成员函数
    // 如果想访问父类中被隐藏的同名成员函数，需要加作用域；
    s2.Base::func(100);
}
int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}