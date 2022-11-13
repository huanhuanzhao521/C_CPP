#pragma once
#include "worker.h"
#include <iostream>
#include <fstream>

#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager {
public:

    WorkerManager();

    ~WorkerManager();

    // 展示菜单
    void Show_Menu();

    // 退出系统
    void Exit_System();

    // 添加职工
    void add_Emp();

    // 保存文件
    void save();

    // 获取职工人数
    int get_EmpNum();

    // 初始化职工
    void Init_Emp();

    // 显示职工
    void show_Emp();

    // 判断职工是否存在
    int exit_Emp(int id);
    // 删除职工
    void del_Emp();

    // 修改职工
    void Mod_Emp();

    // 查找职工
    void Find_Emp();

    // 职工排序
    void Sort_Emp();

    // 清空文件
    void clear_File();

    // 判断文件是否为空的标志
    bool m_FileIsEmpty;

    // 记录职工人数
    int m_EmpNum;

    // 职工数组指针
    Worker** m_EmpArray;
private:
};
