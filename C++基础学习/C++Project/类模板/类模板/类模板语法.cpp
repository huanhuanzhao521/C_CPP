#include <iostream>
#include <string>

using namespace std;

template <typename NameType, typename AgeType>
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

void test01()
{
    Person<string, int> p1("�����", 1000);
    p1.showPerson();
}
int main()
{

    test01();
    system("pause");
    return 0;
}