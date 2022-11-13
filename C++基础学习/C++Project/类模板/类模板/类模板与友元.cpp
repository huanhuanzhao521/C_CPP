#include <iostream>
#include <string>

using namespace std;

//ȫ�ֺ�������ʵ��
template<class T1,class T2>
class Person;

template <typename T1, class T2>
void printPerson2(Person <T1, T2> p)
{
    cout << "����ʵ��---������" << p.m_name << " ���䣺" << p.m_age << endl;
}

template <typename T1,typename T2>
class Person
{
    // ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ  ����ʵ��
    friend void printPerson(Person <T1, T2> p)
    {
        cout << "����ʵ��---������" << p.m_name << " ���䣺" << p.m_age << endl;
    }

    // ȫ�ֺ�������ʵ��
    // ���ӿյ�ģ������б�
    // ���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
    friend void printPerson2<>(Person <T1, T2> p);
public:
    Person(T1 name, T2 age)
    {
        this->m_age = age;
        this->m_name = name;
    }
private:
    T1 m_name;
    T2 m_age;
};

// ȫ�ֺ�������ʵ��
void test01()
{
    Person<string, int> p("Tom", 20);
    printPerson(p);
}

void test02()
{
    Person<string, int> p2("Jerry", 20);
    printPerson2(p2);
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}