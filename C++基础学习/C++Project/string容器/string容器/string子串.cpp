#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;
}

// ʵ�ò���
void test02()
{
    string email = "zhangsan@sina.com";

    // ���ʼ���ַ�� ��ȡ �û�����Ϣ
    int pos = email.find("@");
    string userName = email.substr(0, pos);
    cout << "�û�����" << userName << endl;

}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}