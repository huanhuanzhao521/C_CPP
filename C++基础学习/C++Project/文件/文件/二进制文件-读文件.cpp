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
        cout << "�ļ���ʧ��" << endl;
        return;
    }
    Person p;
    ifs.read((char*)&p, sizeof(Person));
    cout << "������" << p.m_name << "  ���䣺" << p.m_age << endl;

    ifs.close();
}

int main()
{

    test01();
    system("pause");
    return 0;
}