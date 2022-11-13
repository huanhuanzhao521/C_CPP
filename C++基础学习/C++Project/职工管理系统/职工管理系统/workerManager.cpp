#include "workerManager.h"
#include "employee.h"
#include "Manager.h"
#include "boss.h"

WorkerManager::WorkerManager()
{
    // 1、文件不存在
    ifstream ifs;
    ifs.open(FILENAME, ios::in); // 读文件
    if (!ifs.is_open()) {
        // cout << "文件不存在" << endl;

        // 初始化属性
        // 初始化记录人数
        this->m_EmpNum = 0;
        // 初始化数组指针
        this->m_EmpArray = nullptr;
        // 初始化文件是否为空
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    // 2、文件存在，并且没有记录
    char ch;
    ifs >> ch;
    if (ifs.eof()) {
        // 代表文件为空
        // cout << "文件为空" << endl;
        this->m_EmpArray = nullptr;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        ifs.close();
        return ;
    }

    // 3、文件存在，并且记录数据
    int num = this->get_EmpNum();
    // cout << "职工人数为：" << num << endl;
    this->m_EmpNum = num;

    this->m_EmpArray = new Worker * [this->m_EmpNum];
    // 将文件中的数据存储到数组中
    this->Init_Emp();

    // 测试代码

    /*for (int i = 0; i < this->m_empnum; i++) {
        cout << "职工编号：" << this->m_emparray[i]->m_id << " "
            << "职工姓名：" << this->m_emparray[i]->m_name << " "
            << "部门编号：" << this->m_emparray[i]->m_deptid << endl;
    }*/
}

WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != nullptr) {
        delete[]this->m_EmpArray;
        this->m_EmpArray = nullptr;
    }
}

void WorkerManager::Show_Menu()
{
    cout << "**********************************" << endl;
    cout << "*******   0.退出管理程序   *******" << endl;
    cout << "*******   1.增加职工信息   *******" << endl;
    cout << "*******   2.显示职工信息   *******" << endl;
    cout << "*******   3.删除离职职工   *******" << endl;
    cout << "*******   4.修改职工信息   *******" << endl;
    cout << "*******   5.查找职工信息   *******" << endl;
    cout << "*******   6.按照编号排序   *******" << endl;
    cout << "*******   7.清空所有文档   *******" << endl;
    cout << "**********************************" << endl;
    cout << endl;
}

void WorkerManager::Exit_System()
{
    cout << "欢迎下次使用！" << endl;
    system("pause");
    exit(0);
}

// 添加职工
void WorkerManager::add_Emp()
{
    cout << "请输入添加的职工数量：" << endl;
    int addNum = 0;
    cin >> addNum;
    if (addNum > 0) {
        // 添加
        // 计算添加新的空间大小
        // 新空间的人数 = 原来记录人数 + 新增人数
        int newSize = this->m_EmpNum + addNum;

        // 开辟新空间
        Worker** newSpace = new Worker*[newSize];

        // 将原来空间下的数据，拷贝到新空间下
        if (this->m_EmpArray != nullptr) {
            for (int i = 0; i < this->m_EmpNum; i++) {
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        // 添加新数据
        for (int i = 0; i < addNum; i++) {
            int id; // 职工编号
            string name; // 职工姓名
            int dSelect; // 部门选择
            cout << "请输入 " << i + 1 << "个新职工编号：" << endl;
            cin >> id;

            cout << "请输入 " << i + 1 << "个新职工姓名：" << endl;
            cin >> name;

            cout << "请选择该职工的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、总裁" << endl;

            cin >> dSelect;
            Worker* worker = nullptr;
            switch (dSelect) {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                break;
            }
            // 将创建的职工指针保存到数组中
            newSpace[this->m_EmpNum + i] = worker;
        }
        delete[]this->m_EmpArray;

        // 更改新空间的指向
        this->m_EmpArray = newSpace;

        // 更新职工人数
        this->m_EmpNum = newSize;
        this->m_FileIsEmpty = false;

        // 提示添加成功
        cout << "添加成功" << addNum << "名新职工" << endl;

        // 保存数据到文件中
        this->save();
    } else {
        cout << "添加有误！" << endl;
    }
    // 按任意键后，清屏回到上级目录
    system("pause");
    system("cls");
}

// 保存文件
void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out); // 用输出的方式打开文件 ==写文件
    for (int i = 0; i < this->m_EmpNum; i++) {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DeptId << endl;
    }
    ofs.close();
}

int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int did;
    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> did) {
        num++;
    }
    return num;
}

// 初始化职工
void WorkerManager::Init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int did;
    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> did) {
        Worker* worker = nullptr;
        if (did == 1) {
            // 普通职工
            worker = new Employee(id, name, did);
        } else if (did == 2) {
            // 经理
            worker = new Manager(id, name, did);
        } else {
            // 总裁
            worker = new Boss(id, name, did);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }

    // 关闭文件
    ifs.close();
}

// 显示职工
void WorkerManager::show_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空！" << endl;
    }
    for (int i = 0; i < m_EmpNum; i++) {
        // 利用该多态调用程序接口
        this->m_EmpArray[i]->showInfo();
    }
    // 按任意键后清屏
    system("pause");
    system("cls");
}

// 判断职工是否存在
int WorkerManager::exit_Emp(int id)
{
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++) {
        if (this->m_EmpArray[i]->m_Id == id) {
            // 找到职工
            index = i;
            break;
        }   
    }
    return index;
}
// 删除职工
void WorkerManager::del_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空!" << endl;
    }

    // 按照职工的编号删除职工
    cout << "请输入想要删除的职工编号：" << endl;
    int id = 0;
    cin >> id;
    int num = this->exit_Emp(id);
    if (num != -1) {
        // 说明职工存在，并且要删除num位置的职工
        // 数据前移
        for (int i = num; i < this->m_EmpNum - 1; i++) {
            this->m_EmpArray[i] = this->m_EmpArray[i + 1];
        }
        this->m_EmpNum--; // 更新数组中记录的人员个数
        // 同步更新到文件中
        this->save();

        cout << "删除成功" << endl;
    } else {
        cout << "删除失败，未找到该职工" << endl;
    }
    system("pause");
    system("cls");
}

// 修改职工
void WorkerManager::Mod_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空!" << endl;
    }
    cout << "请输入修改职工的编号：" << endl;
    int id = 0;
    cin >> id;
    int exitNum = this->exit_Emp(id);
    if (exitNum != -1) {
        delete this->m_EmpArray[exitNum];
        int newid = 0;
        string newname = "";
        int dselect = 0;
        cout << "查找到" << id << "号职工，请输入新职工号：" << endl;
        cin >> newid;
        cout << "请输入新姓名：" << endl;
        cin >> newname;
        cout << "请输入新岗位：" << endl;
        cout << "1、普通职工" << endl;
        cout << "2、经理" << endl;
        cout << "3、总裁" << endl;
        cin >> dselect;

        Worker* worker = nullptr;
        switch (dselect) {
            case 1:
                worker = new Employee(newid, newname, dselect);
                break;
            case 2:
                worker = new Manager(newid, newname, dselect);
                break;
            case 3:
                worker = new Boss(newid, newname, dselect);
                break;
            default:
                break;
        }

        // 更新数据 到数组中
        this->m_EmpArray[exitNum] = worker;
        cout << "修改成功!" << endl;

        // 保存更新文件
        this->save();
    } else {
        cout << "修改失败，查无此人" << endl;
    }

    // 按任意键清屏
    system("pause");
    system("cls");
}

// 查找职工
void WorkerManager::Find_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空" << endl;
    }
    cout << "请输入查找方式：" << endl;
    cout << "1、按照职工编号查找" << endl;
    cout << "2、按照职工姓名查找" << endl;
    int fselect = 0;
    cin >> fselect;
    if (fselect == 1) {
        // 按照编号查找
        int id;
        cout << "请输入要查找职工的编号：" << endl;
        cin >> id;

        int ret = exit_Emp(id);
        if (ret != -1) {
            // 找到该职工
            cout << "查找职工，该职工的信息如下：" << endl;
            this->m_EmpArray[ret]->showInfo();
        }
        else {
            cout << "查找失败，查无此人！" << endl;
        }

    }
    else if (fselect == 2) {
        // 按照姓名查找
        string name;
        cout << "请输入要查找的职工姓名：" << endl;
        cin >> name;
        // 加入判断是否查到的标识
        bool flag = false;

        for (int i = 0; i < this->m_EmpNum; i++) {
            if (this->m_EmpArray[i]->m_Name == name) {
                cout << "查找成功，职工编号为" << this->m_EmpArray[i]->m_Id << "号的信息如下：" << endl;
                flag = true;
                this->m_EmpArray[i]->showInfo();
            }
        }
        if (flag == false) {
            cout << "查找失败，查无此人！" << endl;
        }

    } else {
        cout << "输入选项有误，请重新输入" << endl;
    }
    /*switch (fselect) {
        case 1:
            break;
        case 2:
            break;
        default:
            break;
    }*/
    system("pause");
    system("cls");
}

// 职工排序,选择排序
void WorkerManager::Sort_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空！" << endl;
        system("pause");
        system("cls");
    }

    cout << "请选择排序方式：" << endl;
    cout << "1、按照职工号进行升序" << endl;
    cout << "2、按照职工号进行降序" << endl;
    int select = 0;
    cin >> select;
    for (int i = 0; i < m_EmpNum; i++) {
        int minOrMax = i; // 声明最小值 或者 最大值的下标
        for (int j = i + 1; j < this->m_EmpNum; j++) {
            if (select == 1) {
                // 升序
                if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id) {
                    minOrMax = j;
                } 
            } else {
                // 降序
                if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id) {
                    minOrMax = j;
                }
            }
        }
        // 判断一开始认定的最小值或最大值 是不是 计算的最小值或最大值，如果不是，交换数据
        if (i != minOrMax) {
            Worker* tmp = this->m_EmpArray[i];
            this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
            this->m_EmpArray[minOrMax] = tmp;
        }
    }
    cout << "排序成功！排序后的结果为：" << endl;
    this->save();  // 排序后的结果保存到文件中
    this->show_Emp(); // 展示所有的职工
}

// 清空文件
void WorkerManager::clear_File()
{
    if (this->m_FileIsEmpty) {
        cout << "文件不存在或者记录为空！" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "确认清空文件？" << endl;
    cout << "1、确认" << endl;
    cout << "2、返回" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        // 打开模式：ios::trunc
        ofstream ofs(FILENAME, ios::trunc); // 删除文件后重新创建
        ofs.close();
        if (this->m_EmpArray != nullptr) {
            // 删除每个堆区的职工对象
            for (int i = 0; i < this->m_EmpNum; i++) {
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = nullptr;
            }
            // 删除堆区数组指针
            delete[]this->m_EmpArray;
            this->m_EmpArray = nullptr;
            this->m_EmpNum = 0;
            this->m_FileIsEmpty = true;
        }
        cout << "清空成功！" << endl;
    }
    system("pause");
    system("cls");
}