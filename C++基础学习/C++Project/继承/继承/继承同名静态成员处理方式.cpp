#include <iostream>

using namespace std;

class Base {
public:
    static int m_a;
    static void func()
    {
        cout << "Base - static void func() " << endl;
    }
    static void func(int a)
    {
        cout << "Base - static void func(int a) " << endl;
    }
};

int  Base::m_a = 100;

class Son :public Base {
public:
    static int m_a;
    static void func()
    {
        cout << "Son - static void func() " << endl;
    }
    
};
int Son::m_a = 200;


// ͬ����̬��Ա����
void test01()
{
    // 1��ͨ���������
    Son s;
    cout << "Son�µ�m_a = " << s.m_a << endl;
    cout << "Base�µ�m_a = " << s.Base::m_a << endl;

    // 2��ͨ��������������
    cout << "ͨ���������ʣ�" << endl;
    cout << "Son �µ�m_a = " << Son::m_a << endl;

    // ��һ��:: ����ͨ��������ʽ���ʣ��ڶ���:: ������ʸ�����������
    cout << "Base �µ�m_a = " << Son::Base::m_a << endl;
}

// ͬ����̬��Ա����
void test02()
{
    // 1��ͨ���������
    cout << "ͨ��������ʣ�" << endl;
    Son s;
    s.func();
    s.Base::func();

    // 2��ͨ����������
    cout << "ͨ���������ʣ�" << endl;
    Son::func();
    Son::Base::func();

    // ������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ظ���������ͬ���ĳ�Ա������
    // �������ʸ����б����ص�ͬ����Ա����Ҫ��������
    Son::Base::func(100);
}

int main()
{

    test01();
    cout << endl;
    test02();
    system("pause");
    return 0;
}