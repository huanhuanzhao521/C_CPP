#include "boss.h"
#include <iostream>
using namespace std;

Boss::Boss(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = did;
}
void Boss::showInfo()
{
    cout << "总裁编号：" << this->m_Id <<
        "\t总裁姓名：" << this->m_Name <<
        "\t岗位：" << this->getDeptName() <<
        "\t岗位职责：" << "管理公司所有事务." << endl;
}
string Boss::getDeptName()
{
    return string("总裁");
}