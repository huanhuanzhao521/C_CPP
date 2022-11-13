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
    ofstream ofs("person.text", ios::out | ios::binary);
    // ofs.open("person.text", ios::out | ios::binary);
    Person p = { "уехЩ",18 };
    ofs.write((const char*) &p, sizeof(Person));
    ofs.close();
}

int main()
{

    test01();
    system("pause");
    return 0;
}