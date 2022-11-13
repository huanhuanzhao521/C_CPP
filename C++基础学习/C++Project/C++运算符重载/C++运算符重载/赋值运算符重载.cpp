#include <iostream>

using namespace std;

class Person {
public:

    Person(int age)
    {
        m_age = new int(age);
    }

    ~Person()
    {
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }
    }

    // ���ظ�ֵ�����
    Person& operator=(Person& p)
    {
        // �������ṩ��ǳ����
        // m_age = p.m_age;

        // Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ���ڽ��п���
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }

        // ���
        m_age = new int(*p.m_age);

        // ���ض�����
        return *this;
    }
    int *m_age;
};


void test01()
{
    Person p1(18);

    Person p2(20);

    p2 = p1;

    Person p3(30);

    p3 = p2 = p1;

    cout << "p1������Ϊ��" << *p1.m_age << endl;

    cout << "p2������Ϊ��" << *p2.m_age << endl;

    cout << "p2������Ϊ��" << *p3.m_age << endl;

}

int main()
{
    test01();

    system("pause");
    return 0;
}