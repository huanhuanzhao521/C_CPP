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
        cout << "Base func �ĵ���." << endl;
    }
    void func(int a)
    {
        cout << "Base func(int a) �ĵ���." << endl;
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
        cout << "Son func �ĵ���." << endl;
    }
    int m_a;
};
void test01()
{
    Son s;
    cout << "Son m_a = " << s.m_a << endl;

    // ���ͨ�����������ʸ����е�ͬ����Ա����Ҫ��������
    cout << "Base m_a = " << s.Base::m_a << endl;
}

void test02()
{
    Son s2;
    s2.func(); // ֱ�ӵ��ã����õ��������е�ͬ����Ա��

    s2.Base::func();

    // s2.func(100);  // ��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص�����������ͬ���ĳ�Ա����
    // �������ʸ����б����ص�ͬ����Ա��������Ҫ��������
    s2.Base::func(100);
}
int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}