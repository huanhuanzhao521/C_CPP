#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // ��������
    void setName(string name)
    {
        m_name = name;
    }

   // ��ȡ����
    string getName()
    {
        m_age = 0;
        return m_name;
    }

    // ��ȡ����  �޸�Ϊ�ɶ���д
    int getAge()
    {
        return m_age;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 150) {
            m_age = 0;
            cout << "�������������" << endl;
            return;
        }
        m_age = age;
    }
    // �������� ֻд
    void setLover(string lover)
    {
        m_lover = lover;
    }
private:
    string m_name;
    int m_age;
    string m_lover;
};

int main()
{
    Person p;
    p.setName("����");
    cout << "����Ϊ��" << p.getName() << endl;

    p.setAge(18);
    cout << "����Ϊ��" << p.getAge() << endl;

    p.setLover("�����");

    system("pause");
    return 0;
}