#include <iostream>

using namespace std;


// ������
class Person {
public:

    // thisָ��ı�����  ָ�볣����ָ���ָ���ǲ������޸ĵ�
    // const Person *const this;
    // �ڳ�Ա���������const,���ε���this ָ����ָ��ָ���ֵҲ�������޸ģ�
    void showPerson() const
    {
        this->m_b = 100;  // ����mutable
        // this->m_a = 100;
        // this = nullptr; // thisָ�벻�����޸�ָ��ָ���
    }

    void func()
    {
        m_a = 100;
    }

    int m_a;
    mutable int m_b; // �����������ʹ�ڳ������У�Ҳ�����޸����ֵ��
};


void test01()
{
    Person p;
    p.showPerson();
}
// ������

void test02()
{
    const Person p; // �ڶ���ǰ��const ,��Ϊ������
    // p.m_a = 100;  // �����������޸�ָ��ָ���ֵ
    p.m_b = 200;  // m_b������ֵ���ڳ�������Ҳ�����޸ģ�

    // ������ֻ�ܵ��ó�����
    p.showPerson();
    // p.func();  // �����󲻿��Ե�����ͨ�ĳ�Ա��������Ϊ��ͨ��Ա���������޸����ԣ�
}

int main()
{


    system("pause");
    return 0;
}