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

    // 实例化管理者对象
    WorkerManager worman;
    /*Worker *work = nullptr;
    work = new Employee(1, "张三", 1);
    work->showInfo();
    delete work;

    work = new Manager(2, "李四", 2);
    work->showInfo();
    delete work;

    work = new Boss(3, "王五", 3);
    work->showInfo();
    delete work;*/

    while (true) {
        // 调用显示菜单的成员函数
        worman.Show_Menu();

        cout << "请输入您的选择:" << endl;
        cin >> choice;
        switch (choice) {
        case 0: // 退出系统
            worman.Exit_System();
            break;
        case 1: // 增加职工
            worman.add_Emp();
            break;
        case 2: // 显示职工
            worman.show_Emp();
            break;
        case 3: // 删除职工
            worman.del_Emp();
            // 测试
            /*{
                int ret = worman.exit_Emp(6);
                if (ret != -1) {
                    cout << "职工存在" << endl;
                } else {
                    cout << "职工不存在" << endl;
                }
                break;
            }*/
            case 4: // 修改职工
                worman.Mod_Emp();
                break;
            case 5: // 查找职工
                worman.Find_Emp();
                break;
            case 6: // 排序职工
                worman.Sort_Emp();
                break;
            case 7: // 清空文档
                worman.clear_File();
                break;
            default:
                system("cls");
        }
    }

    system("pause");
    return 0;
}