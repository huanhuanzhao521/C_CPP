// 1������100000��������ACGT�ĸ��ַ�������ַ����������
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

constexpr int MAX_NUM = 100000;
constexpr int SUB_NUM = 40000;
static constexpr char CCH[] = { "ACGT" };

string generateString(int num)
{
    string str;
    char c;
    srand((int)time(0));
    for (int i = 0; i < num; i++) {  
        int n = rand() % (sizeof(CCH)-1);
        c = CCH[n];
        str.push_back(c);
    }
    return str;
}

// 2����1�����ɵ��ַ������������40000���ַ�����ÿ���ַ����ĳ���Ϊ100��
void getSub(int subnum)
{
    string substr;
    string str = generateString(MAX_NUM);
    char ch;
    srand((int)time(0));
    for (int i = 0; i < SUB_NUM; i++) {
        for (int j = 0; j < 100; j++) {
            int n = rand() % sizeof(str);
            ch = str[n];
            substr.push_back(ch);
        }
        cout << "substr " << i << " = " << substr << endl;
        cout << "======sizeof======" <<sizeof(substr) << endl;
    }
    
}

// 3��
int main()
{
    cout << "Generate ACTG :" << generateString(MAX_NUM) << endl;
    
    cout << "Generate SubStr :" <<  endl;
    getSub(SUB_NUM);

    system("pause");
    return 0;
}