#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    ifstream ifs;

    ifs.open("H:\\work2022\\C++Project\\�ļ�\\text.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "�ļ���ʧ��";
        return;
    }

    // ������
    // ��һ�ַ�ʽ
    /*char buff[1024] = { 0 };
    while (ifs >> buff) {
        cout << buff << endl;
    }*/

    // �ڶ��ַ�ʽ
    /*char buff[1024] = { 0 };
    while (ifs.getline(buff, sizeof(buff))) {
        cout << buff << endl;
    }*/

    // �����ַ�ʽ
    string buf;
    /*while (getline(ifs, buf)) {
        cout << buf << endl;
    }*/

    // �����ַ�ʽ
    char c;
    while ((c = ifs.get()) != EOF) { // EOF == End Of File
        cout << c;
    }

    ifs.close();
}

int main()
{

    test01();
    system("pause");
    return 0;
}