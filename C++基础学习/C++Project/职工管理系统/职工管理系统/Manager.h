#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

// 经理类
class Manager :public Worker {
public:
    Manager(int id, string name, int did);
    // 显示个人信息
    virtual void showInfo();

    // 获取岗位名称
    virtual string getDeptName();
};
