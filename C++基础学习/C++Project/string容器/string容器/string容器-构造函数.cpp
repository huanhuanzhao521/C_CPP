#include <iostream>
#include <string>
using namespace std;

void test01()
{
    string s1; // Ĭ�Ϲ���
    const char* str = "hello world";
    string s2(str);

    cout << "str = " << str << endl;
    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;

}

int main()
{
    test01();
    system("pause");
    return 0;
}