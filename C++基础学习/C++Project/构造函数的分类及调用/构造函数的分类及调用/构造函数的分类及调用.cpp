#include <iostream>
using namespace std;

// ����
class Person
{
public:
    // Ĭ�Ϲ��캯��
    Person()
    {
        cout << "Person ���캯���ĵ���..." << endl;
    }
    // �вι��캯��
    Person(int a)
    {
        age = a;
        cout << "Person(int a) �вι��캯���ĵ���..." << endl;
    }
    // �������캯��
    Person(const Person &p)
    {
        // ������������ϵ��������ԣ��������ң���ǰ��������
        age = p.age;
        cout << "Person(const Person &p) �������캯���ĵ���..." << endl;
    }
    ~Person()
    {
        cout << "Person ���������ĵ���..." << endl;
    }
// private:
    int age;
};
// ����
void test01()
{
    // 1�����ŷ�
    Person p1; // Ĭ�Ϲ��캯���ĵ���
    Person p2(10);

    // �������캯���ĵ���
    Person p3(p2);

    // ע�����
    // ����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ�ӣ�����
    // Person p1();  ���д������������Ϊ����һ��������������������Ϊ�ڴ�������
    // cout << "p2������Ϊ��" << p2.age << endl;
    // cout << "p2������Ϊ��" << p3.age << endl;
    // 
    // 2����ʾ��
    Person p4;
    Person p5 = Person(10); // �вι���

    Person p6 = Person(p5);

    // Person(10); // �������󣬵�ǰ��ִ�н�����ϵͳ���������յ������Ķ���
    // ע������2����Ҫ���ÿ������캯�� ��ʼ�� ��������
    // Person(p3); ����������Ϊ Person(p3)  �ȼ���  Person p3; ���������

    // 3����ʽת����
    Person p7 = 10; // �൱�� Person p7 = Person(10); �вι���
    Person p8 = p7; // �������캯����Person p8 = Person(p7);

    
}
int main()
{

    test01();
    system("pause");
    return 0;
}