#include <iostream>
#include <string>
using namespace std;

// Բ����
constexpr double PI = 3.14;

/*
// ���Բ��
class Circle
{
public:
    double r;  // �뾶

    double calculateZC() {
        return 2 * PI * r;
    }
};
int main()
{
    // ͨ���ഴ������Ķ���
    Circle c1;
    c1.r = 10;
    cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
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
    cout << "ѧ��������" << m_name <<
        "    ѧ�����䣺" << m_age << endl;
}


int main()
{
    // ʵ������ͨ���ഴ��һ������Ķ���
    Student stu1;
    stu1.m_age = 17;
    stu1.m_name = "����";
    stu1.showStudent();

    Student stu2;
    stu2.setName("����");
    stu2.setAge(16);
    stu2.showStudent();

    system("pause");
    return 0;
}