#include <iostream>
using namespace std;

// 1�����캯�� ���г�ʼ������
class Person
{
public:
    // 1�����캯��
    Person()
    {
        cout << "Person���캯���ĵ���" << endl;
    }

    // 2����������
    ~Person()
    {
        cout << "Person���������ĵ���" << endl;
    }
};


void test01()
{
    Person p; // ��ջ�ϵ����ݣ�test01ִ����Ϻ��ͷ��������
}
int main()
{
    // 
    test01();
    // Person p;

    system("pause");
    return 0;
}