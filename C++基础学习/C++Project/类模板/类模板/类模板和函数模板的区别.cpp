#include <iostream>
#include <string>
using namespace std;

template <typename NameType, typename AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    void showPerson()
    {
        cout << "姓名：" << this->m_name << "  年龄：" << this->m_age << endl;
    }
    NameType m_name;
    AgeType m_age;
};
// 1、类模板没有自动类型推导使用方式
void test01()
{
    // Person p("孙悟空", 1000);  // 错误，无法用自动类型推导
    Person<string, int> p("孙悟空", 1000); // 正确，只能用显示指定类型
    p.showPerson();
}
// 2、类模板在模板参数列表中可以有默认参数
void test02()
{
    Person <string> p("猪八戒", 999);
    p.showPerson();
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}