#include <iostream>

using namespace std;


class Person {
public:
    void showClassName()
    {
        cout << "this is Person Class." << endl;
    }

    void showPersonAge()
    {
        // �����ԭ������Ϊ�����ָ����nullptr
        if (this == nullptr) {
            return;
        }
        cout << "age = " <<this-> m_age << endl;
    }

    int m_age;
};

void test01()
{
    Person* p = nullptr;

    p->showClassName();

    p->showPersonAge();
}

int main()
{

    test01();
    system("pause");
    return 0;
}