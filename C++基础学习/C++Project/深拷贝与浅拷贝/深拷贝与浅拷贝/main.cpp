#include <iostream>
#include <string>

using namespace std;
// �����ǳ����
class Person {
public:
    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }
    Person(int age,int height)
    {
        m_age = age;
        m_height = new int(height);
        cout << "Person���вι��캯������" << endl;
    }

    // �Լ�ʵ�ֿ������캯�� ���ǳ��������������
    Person(const Person& p)
    {
        cout << "Person�Ŀ������캯������" << endl;
        m_age = p.m_age;
        // m_height = p.m_height; // ������Ĭ��ʵ�־������д���
        // �������
        m_height = new int(*p.m_height);
    }
    ~Person()
    {
        // �������룬���������ٵ��������ͷŲ���
        if (m_height != nullptr) {
            delete m_height;
            m_height = nullptr;
        }
        cout << "Person��������������" << endl;
    }
    int m_age;

    int* m_height;
};

void test01()
{
    Person p1(18, 160);
    cout << "P1������Ϊ��" << p1.m_age << "  ���Ϊ��" << *p1.m_height << endl;

    Person p2(p1);
    cout << "P2������Ϊ��" << p2.m_age << "  ���Ϊ��" << *p2.m_height << endl;

}


int main()
{
    test01();
    system("pause");
    return 0;
}