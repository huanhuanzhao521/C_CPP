#include <iostream>
using namespace std;
/*
1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3������ģ��Ҳ���Է�������
4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
*/

void myPrint(int a, int b)
{
    cout << "���õ�����ͨ����" << endl;
}


template <typename T>
void myPrint(T a, T b)
{
    cout << "���õ��Ǻ���ģ��" << endl;
}

template <typename T>
void myPrint(T a, T b,T c)
{
    cout << "���õ������صĺ���ģ��" << endl;
}

void test01()
{
    int a = 10;
    int b = 20;
    // myPrint(a, b);

    // ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
    // myPrint<>(a, b);

    // myPrint(a, b, 100);

    // �������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2);
}


int main()
{

    test01();
    system("pause");
    return 0;
}
