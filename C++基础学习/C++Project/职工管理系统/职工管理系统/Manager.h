#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

// ������
class Manager :public Worker {
public:
    Manager(int id, string name, int did);
    // ��ʾ������Ϣ
    virtual void showInfo();

    // ��ȡ��λ����
    virtual string getDeptName();
};
