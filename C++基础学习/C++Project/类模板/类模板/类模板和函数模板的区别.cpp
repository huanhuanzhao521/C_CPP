#include <iostream>
#include <string>
using namespace std;

template <typename NameType, typename AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    void showPerson()
    {
        cout << "������" << this->m_name << "  ���䣺" << this->m_age << endl;
    }
    NameType m_name;
    AgeType m_age;
};
// 1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test01()
{
    // Person p("�����", 1000);  // �����޷����Զ������Ƶ�
    Person<string, int> p("�����", 1000); // ��ȷ��ֻ������ʾָ������
    p.showPerson();
}
// 2����ģ����ģ������б��п�����Ĭ�ϲ���
void test02()
{
    Person <string> p("��˽�", 999);
    p.showPerson();
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}