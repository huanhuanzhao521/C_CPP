#include <iostream>
#include <fstream>

using namespace std;

class Person {
public:

    char m_name[64];
    int m_age;
};

void test01()
{
    ifstream ifs("person.text", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    Person p;
    ifs.read((char*)&p, sizeof(Person));
    cout << "姓名：" << p.m_name << "  年龄：" << p.m_age << endl;

    ifs.close();
}

int main()
{

    test01();
    system("pause");
    return 0;
}