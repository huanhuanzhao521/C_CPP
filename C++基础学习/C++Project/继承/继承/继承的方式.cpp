#include <iostream>
using namespace std;


class Base1 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son1 :public Base1 {
public:
    void func()
    {
        m_a = 10; // �����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
        m_b = 100; // �����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
        // m_c = 1000;  // �����е�˽��Ȩ�޳�Ա��������ʲ�����
    }
};

void test01()
{
    Son1 s1;
    s1.m_a = 100;
    // s1.m_b = 100;  // ��son1�У�m_b�Ǳ�����Ա��������ʲ�����
}


class Base2 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son2 :protected Base2 {
public:
    void func()
    {
        m_a = 100; // �����еĹ�����Ա���������б�Ϊ����Ȩ�ޣ�
        m_b = 100; // �����еı�����Ա���������б�Ϊ����Ȩ�ޣ�
        // m_c = 100; // �����е�˽�г�Ա ������ʲ���
    }
};

void test02()
{
    Son2 s2;
    // s2.m_a = 100; // ��son2�У�m_a��Ϊ����Ȩ�ޣ����������ʲ�����
}

class Base3 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
class Son3 :private Base3 {
public:
    void func()
    {
        m_a = 100; // �����й�����Ա���������б�Ϊ  ˽�г�Ա
        m_b = 100; // �����б�����Ա���������б�Ϊ  ˽�г�Ա
        // m_c = 100;  // �����е�˽�г�Ա��������ʲ�����
    }
};
void test03()
{
    Son3 s3;
    // s3.m_a = 1000;  // ��son3�� ��Ϊ˽�г�Ա��������ʲ�����
    // s3.m_b = 1000;  // ��son3�� ��Ϊ˽�г�Ա��������ʲ�����
}

class GrandSon3 :public Son3 {
public:
    void func()
    {
        // m_a = 1000;   // ����son3�У�m_a��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ�Ƿ��ʲ�����
        // m_b = 1000;   // ����son3�У�m_b��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ�Ƿ��ʲ�����
    }
};


int main()
{

    system("pause");
    return 0;
}