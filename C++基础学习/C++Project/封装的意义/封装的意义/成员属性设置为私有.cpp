#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // 设置姓名
    void setName(string name)
    {
        m_name = name;
    }

   // 获取姓名
    string getName()
    {
        m_age = 0;
        return m_name;
    }

    // 获取年龄  修改为可读可写
    int getAge()
    {
        return m_age;
    }
    void setAge(int age)
    {
        if (age < 0 || age > 150) {
            m_age = 0;
            cout << "你这个老妖精！" << endl;
            return;
        }
        m_age = age;
    }
    // 设置情人 只写
    void setLover(string lover)
    {
        m_lover = lover;
    }
private:
    string m_name;
    int m_age;
    string m_lover;
};

int main()
{
    Person p;
    p.setName("张三");
    cout << "姓名为：" << p.getName() << endl;

    p.setAge(18);
    cout << "年龄为：" << p.getAge() << endl;

    p.setLover("刘钰婧");

    system("pause");
    return 0;
}