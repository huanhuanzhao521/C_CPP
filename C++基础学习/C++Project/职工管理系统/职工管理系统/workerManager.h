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

    // չʾ�˵�
    void Show_Menu();

    // �˳�ϵͳ
    void Exit_System();

    // ���ְ��
    void add_Emp();

    // �����ļ�
    void save();

    // ��ȡְ������
    int get_EmpNum();

    // ��ʼ��ְ��
    void Init_Emp();

    // ��ʾְ��
    void show_Emp();

    // �ж�ְ���Ƿ����
    int exit_Emp(int id);
    // ɾ��ְ��
    void del_Emp();

    // �޸�ְ��
    void Mod_Emp();

    // ����ְ��
    void Find_Emp();

    // ְ������
    void Sort_Emp();

    // ����ļ�
    void clear_File();

    // �ж��ļ��Ƿ�Ϊ�յı�־
    bool m_FileIsEmpty;

    // ��¼ְ������
    int m_EmpNum;

    // ְ������ָ��
    Worker** m_EmpArray;
private:
};
