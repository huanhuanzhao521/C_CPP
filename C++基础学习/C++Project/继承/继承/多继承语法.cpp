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

// ���࣬��Ҫ�̳�Base1 �� Base2
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

    // �������г�����ͬ���ĳ�Ա����Ҫ������������
    cout << "Base1::m_a = " << s.::Base1::m_a << endl;
    cout << "Base2::m_a = " << s.::Base2::m_a << endl;
}

int main()
{

    test01();
    system("pause");
    return 0;
}