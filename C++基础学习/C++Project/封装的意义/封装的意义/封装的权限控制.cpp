#include <iostream>
#include <string>
using namespace std;

// ����Ȩ��
// public
// protected  ���ӿ��Է��ʸ����еı�������
// private    ���Ӳ����Է��ʸ����е�˽������

class Person
{
public:
    void func()
    {
        m_name = "����";
        m_car = "������";
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
    p1.m_name = "����";
    // p1.m_car = "����"; // ���ɷ���

    system("pause");
    return 0;
}