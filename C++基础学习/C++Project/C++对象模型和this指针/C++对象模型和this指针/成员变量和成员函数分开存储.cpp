#include <iostream>

using namespace std;


class Person {
    

    int m_a; // �Ǿ�̬��Ա������������Ķ�����

    static int m_b; // ��̬��Ա��������������Ķ�����

    void func() {}; // �Ǿ�̬��Ա��������������Ķ�����

    static void func2() {}; // ��̬��Ա��������������Ķ�����
};

void test01()
{
    Person p;

    // �ն���ռ�õ��ڴ�ռ�Ϊ��1
    // C++ ���������ÿ������Ҳ����һ���ֽڣ���Ϊ�����ֿն���ռ�ڴ��λ��
    // ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ��
    cout << "sizeof(p) p = " << sizeof(p) << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}