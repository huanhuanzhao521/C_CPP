#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "Manager.h"
#include "boss.h"
using namespace std;

int main()
{

    int choice = 0;

    // ʵ���������߶���
    WorkerManager worman;
    /*Worker *work = nullptr;
    work = new Employee(1, "����", 1);
    work->showInfo();
    delete work;

    work = new Manager(2, "����", 2);
    work->showInfo();
    delete work;

    work = new Boss(3, "����", 3);
    work->showInfo();
    delete work;*/

    while (true) {
        // ������ʾ�˵��ĳ�Ա����
        worman.Show_Menu();

        cout << "����������ѡ��:" << endl;
        cin >> choice;
        switch (choice) {
        case 0: // �˳�ϵͳ
            worman.Exit_System();
            break;
        case 1: // ����ְ��
            worman.add_Emp();
            break;
        case 2: // ��ʾְ��
            worman.show_Emp();
            break;
        case 3: // ɾ��ְ��
            worman.del_Emp();
            // ����
            /*{
                int ret = worman.exit_Emp(6);
                if (ret != -1) {
                    cout << "ְ������" << endl;
                } else {
                    cout << "ְ��������" << endl;
                }
                break;
            }*/
            case 4: // �޸�ְ��
                worman.Mod_Emp();
                break;
            case 5: // ����ְ��
                worman.Find_Emp();
                break;
            case 6: // ����ְ��
                worman.Sort_Emp();
                break;
            case 7: // ����ĵ�
                worman.clear_File();
                break;
            default:
                system("cls");
        }
    }

    system("pause");
    return 0;
}