#include "Manager.h"
#include <iostream>
using namespace std;


Manager::Manager(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = did;
}
// 显示个人信息
void Manager::showInfo()
{
    cout << "经理编号：" << this->m_Id <<
        "\t经理姓名：" << this->m_Name <<
        "\t岗位：" << this->getDeptName() <<
        "\t岗位职责：" << "完成总裁交给的任务并下发任务给职工" << endl;
}

// 获取岗位名称
string Manager::getDeptName()
{
    return string("经理");
}