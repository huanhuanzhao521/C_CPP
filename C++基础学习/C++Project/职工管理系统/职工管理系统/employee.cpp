#include "employee.h"

Employee::Employee(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = did;
}
// ��ʾ������Ϣ
void Employee::showInfo()
{
    //cout << "ְ�����" << "\tְ������" << "\t��λ" << "\t��λְ��" << endl;
    //cout << "   " << this->m_Id << "\t\t  " << this->m_Name << "\t\t" <<
    //    this->getDeptName() << "\t��ɾ�����������." << endl;
    cout << "ְ����ţ�" << this->m_Id <<
          "\tְ��������" << this->m_Name <<
          "\t��λ��" << this->getDeptName()<<
          "\t��λְ��" << "��ɾ�����������." <<endl;

}

// ��ȡ��λ����
string Employee::getDeptName()
{
    return string("Ա��");
}