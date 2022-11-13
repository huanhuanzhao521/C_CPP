#include <iostream>
#include <string>

using namespace std;

/*
Int find(const string& str,int pos =0) const;    //����str��һ�γ���λ�ã���pos��ʼ����
Int find(const char* s,int pos =0) const;       //����s��һ�γ���λ�ã���pos��ʼ����
Int find(const char* s,int pos,int n) const;     //��posλ�ò���s��ǰn���ַ���һ��λ��
Int find(const char c,int pos=0) const;         //�����ַ�c��һ�γ���λ��
Int rfind(const string& str,int pos =npos) const; //����str���һ��λ�ã���pos��ʼ����
Int rfind(const char* s,int pos =npos) const;  // ����s���һ�γ���λ�ã���pos��ʼ����
Int rfind(const char* s,int pos,int n) const;  //��posλ�ò���s��ǰn���ַ����һ��λ��
Int rfind(const char c,int pos=0) const;    // �����ַ�c���һ�γ���λ��
String& replace(int pos,int n,const string& str);  //�滻��pos��ʼn���ַ�Ϊ�ַ���str
String& replace(int pos,int n,const char* s);  //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

*/
// ����
void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    if (pos == -1) {
        cout << "δ�ҵ��ַ���" << endl;
    } else {
        cout << "�ҵ����ַ�����λ�� pos = " << pos << endl;
    }

    // rfind �� find
    // rfind ����������ң�find�������Ҳ���
    int pos2 = str1.rfind("de");
    cout << "pos2 = " << pos2 << endl;
    
}

// �滻
void test02()
{
    string str = "abcdefg";
    // ��1��λ����3���ַ� �滻Ϊ "1111"
    str.replace(1, 3, "1111");
    cout << "str = " << str << endl;
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}