#include <iostream>
#include <string>

using namespace std;

// ���麯���ͳ�����
class Base {
public:
    // ���麯��
    // ֻҪ��һ�����麯����������Ϊ �����ࣻ
    virtual void func() = 0;
};

class Son : public Base {
public:
    virtual void func()
    {
        cout << "func �����ĵ���" << endl;
    }
};

void test01()
{
    // Base b; // ���������޷�ʵ��������
    // new Base; // ���������޷�ʵ��������
    Son s; // ���������д�����еĴ��麯���������޷�ʵ��������
    Base* ba = new Son;
    ba->func();
}

int main()
{

    test01();
    system("pause");
    return 0;
}