#include <iostream>

using namespace std;


class Base1 {
public:
    Base1()
    {
        m_a = 100;
    }
    int m_a;
};

class Base2 {
public:
    Base2()
    {
        m_a = 200;
    }
    int m_a;
    // int m_a;
};

// 子类，需要继承Base1 和 Base2
class Son :public Base1, public Base2 {
public:
    Son()
    {
        m_c = 300;
        m_d = 400;
    }
    int m_c, m_d;

};

void test01()
{
    Son s;
    cout << "sizeof(s) = " << sizeof(s) << endl;

    // 当父类中出现了同名的成员，需要加作用域区分
    cout << "Base1::m_a = " << s.::Base1::m_a << endl;
    cout << "Base2::m_a = " << s.::Base2::m_a << endl;
}

int main()
{

    test01();
    system("pause");
    return 0;
}