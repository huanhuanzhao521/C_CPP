#include <iostream>

using namespace std;


// thisָ���ʹ��
// ������Ƴ�ͻ��
// ����return *this;
class Person {
public:
    Person(int age)
    {
        // this ָ��ָ����� �����ó�Ա���� �����Ķ���
        this->age = age;
    }

    // void PersonAddAge(Person &p)
    Person& PersonAddAge(Person& p)
    {
        this->age += p.age;

        // thisָ��p2��ָ�룬��*thisָ��ľ���p2�������ı��壻
        return *this;
    }
    int age;
};


// ������Ƴ�ͻ��
void test01()
{
    Person p1(18);
    cout << "P1������Ϊ��" << p1.age << endl;
}

// ���ض����� return *this;
void test02()
{
    Person p1(10);

    Person p2(10);

    // p2.PersonAddAge(p1);
    // ��ʽ���˼��
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2������Ϊ��" << p2.age << endl;
}

int main()
{

    // test01();
    test02();
    system("pause");
    return 0;
}