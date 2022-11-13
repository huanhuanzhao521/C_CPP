#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    ifstream ifs;

    ifs.open("H:\\work2022\\C++Project\\文件\\text.txt", ios::in);

    if (!ifs.is_open()) {
        cout << "文件打开失败";
        return;
    }

    // 读数据
    // 第一种方式
    /*char buff[1024] = { 0 };
    while (ifs >> buff) {
        cout << buff << endl;
    }*/

    // 第二种方式
    /*char buff[1024] = { 0 };
    while (ifs.getline(buff, sizeof(buff))) {
        cout << buff << endl;
    }*/

    // 第三种方式
    string buf;
    /*while (getline(ifs, buf)) {
        cout << buf << endl;
    }*/

    // 第四种方式
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