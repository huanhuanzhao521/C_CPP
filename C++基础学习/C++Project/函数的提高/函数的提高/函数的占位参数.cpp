#include <iostream>
using namespace std;

// ռλ����
// ռλ���� ��������Ĭ�ϲ���
// void func(int a, int)
void func(int a, int = 10)
{
    cout << "this is function" << endl;
}
int main()
{
    // func(10, 10);
    func(10);
    system("pause");
    return 0;
}