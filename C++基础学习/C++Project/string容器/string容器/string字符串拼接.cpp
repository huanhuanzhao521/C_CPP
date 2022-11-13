#include <iostream>
#include <string>

using namespace std;

/*
String& operator+=(const char* str)       // ����+=������
 String& operator+=(const char c)         //��+=������
 String& operator+=(const string& str);     //��+=������
 String& append(const char* s)     //���ַ���s���ӵ���ǰ�ַ�����β
 String& append(const char* s,int n) // ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
 String& append(const string& s)    //ͬoperator+=(const string& str)
 String& append(const string& s,int pos,int n)       //�ַ���s��posλ�ÿ�ʼ��n���ַ����ӵ��ַ�����β��

*/

void test01()
{
    string str1 = "��";
    str1 += "��������Ϸ";
    cout << "str1 = " << str1 << endl;

    str1 += ":";
    cout << "str1 = " << str1 << endl;

    string str2 = "LoL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I ";
    str3.append("love ");
    cout << "str3 = " << str3 << endl;

    str3.append("game abcdef", 5);
    cout << "str3 = " << str3 << endl;

    str3.append(str2);
    cout << "str3 = " << str3 << endl;

    //str3.append(str2, 0, 3); // ֻ��ȡ��lol
    //cout << "str3 = " << str3 << endl;

    str3.append(str2, 4, 3); // ֻ��ȡ��DNF,����2 ���ĸ�λ�ÿ�ʼ��ȡ������3 ��ȡ�ַ��ĸ���
    cout << "str3 = " << str3 << endl;

}

int main()
{
    test01();
    system("pause");
    return 0;
}