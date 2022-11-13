#include <iostream>
#include <string>
using namespace std;

// 圆周率
constexpr double PI = 3.14;

/*
// 设计圆类
class Circle
{
public:
    double r;  // 半径

    double calculateZC() {
        return 2 * PI * r;
    }
};
int main()
{
    // 通过类创建具体的对象
    Circle c1;
    c1.r = 10;
    cout << "圆的周长为：" << c1.calculateZC() << endl;
    system("pause");
    return 0;
}
*/

class Student
{
public:
    void showStudent();
    void setName(string name)
    {
        m_name = name;
    }
    void setAge(int age)
    {
        m_age = age;
    }
// private:
    int m_age;
    string m_name;
};

void Student::showStudent()
{
    cout << "学生姓名：" << m_name <<
        "    学生年龄：" << m_age << endl;
}


int main()
{
    // 实例化，通过类创建一个具体的对象
    Student stu1;
    stu1.m_age = 17;
    stu1.m_name = "张三";
    stu1.showStudent();

    Student stu2;
    stu2.setName("李四");
    stu2.setAge(16);
    stu2.showStudent();

    system("pause");
    return 0;
}