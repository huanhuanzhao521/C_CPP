#include <iostream>

using namespace std;

class Person {
    friend ostream& operator<<(ostream& cout, Person& p);
public:
    // ���ó�Ա�����������Ʋ�����,p.operator<<(cout),�򻯳� p<<cout;
    // �������ó�Ա�������� << ���������Ϊ�޷�ʵ�֣�cout ����ࣻ

    /*void operator<<(cout)
    {

    }*/
    Person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }
private:
    int m_a;
    int m_b;
};

// ֻ������ȫ�ֺ������� << �����,���� operator<<(cout,p),�򻯳� cout<<p;
ostream& operator<<(ostream &cout, Person &p)
{
    cout << "m_a = " << p.m_a << "  m_b = " << p.m_b;
    return cout;
}
void test01()
{

    Person p(10, 10);
    //p.m_a = 10;
    //p.m_b = 10;

    // cout << "p.m_a = " << p.m_a << endl;
    // cout << p;

    // ��ʽ���˼��
    cout << p << "  hello world" << endl;
}

int main()
{

    test01();
    system("pause");
    return 0;
}