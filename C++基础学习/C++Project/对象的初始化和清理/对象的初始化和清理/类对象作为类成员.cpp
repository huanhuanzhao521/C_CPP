#include <iostream>
#include <string>
using namespace std;

// �������Ϊ���Ա

class Phone {
public:
    Phone(string pName)
    {
        cout << "Phone �Ĺ��캯���ĵ���" << endl;
        m_pname = pName;
    }
    ~Phone()
    {
        cout << "Phone �����������ĵ���" << endl;
    }

    // �ֻ�Ʒ������
    string m_pname;
};

class Person {
public:
    // Phone m_phone = pname;  // ��ʽת����
    Person(string name, string pname):m_name(name),m_phone(pname) 
    {
        cout << "Person �Ĺ��캯���ĵ���" << endl;
    }
    ~Person()
    {
        cout << "Person �����������ĵ���" << endl;
    }

    // ����
    string m_name;
    // �ֻ�
    Phone m_phone;
};

// �������������Ϊ�����Ա�������ʱ���ȹ���������ڹ�������������˳�򣺺͹����෴
void test01()
{
    Person p("����","ƻ��MAX");
    cout << p.m_name << "ʹ�õ��ֻ�Ʒ���ǣ�" << p.m_phone.m_pname << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}