#include <iostream>

using namespace std;

// ��̬��Ա����
// ���ж�����ͬһ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���� 

class Person {
public:
    // ��̬��Ա����
    static void func()
    {
        m_a = 200;
        // m_b = 300; // ��̬��Ա���� �����Է��� �Ǿ�̬��Ա����;�����岻֪�����õ�����һ�����޷����ֵ������ĸ������m_b���ԣ���̬��Ա��������һ������
        cout << "static void func() �ĵ���" << endl;
    }

    static int m_a; // ��̬��Ա����
    int m_b;  // �Ǿ�̬��Ա����

    // ��̬��Ա����Ҳ���з���Ȩ�޵�
private:
    static void func2()
    {
        cout << "static void func2() �ĵ���" << endl;
    }
};

int Person::m_a = 100;
// �����ַ��ʷ�ʽ
void test01()
{
    // 1��ͨ���������
    Person p;
    p.func();
    // 2��ͨ����������
    Person::func();

    // Person:::func2();  // ������ʲ���˽�о�̬��Ա������
}

int main()
{
    test01();
    system("pause");
    return 0;
}