#include <iostream>
using namespace std;

class C1 {
    int a1;  // Ĭ��Ȩ����˽��
};

struct C2 {
    int a1; // Ĭ��Ȩ���� ����
};
int main()
{
    C1 c1;
    // c1.a1 = 100;  // ���ɷ���

    C2 c2;
    c2.a1 = 100;  // structĬ����Ȩ���ǹ�������˿��Է���

    system("pause");
    return 0;
}