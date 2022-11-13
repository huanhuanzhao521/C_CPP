#include "workerManager.h"
#include "employee.h"
#include "Manager.h"
#include "boss.h"

WorkerManager::WorkerManager()
{
    // 1���ļ�������
    ifstream ifs;
    ifs.open(FILENAME, ios::in); // ���ļ�
    if (!ifs.is_open()) {
        // cout << "�ļ�������" << endl;

        // ��ʼ������
        // ��ʼ����¼����
        this->m_EmpNum = 0;
        // ��ʼ������ָ��
        this->m_EmpArray = nullptr;
        // ��ʼ���ļ��Ƿ�Ϊ��
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    // 2���ļ����ڣ�����û�м�¼
    char ch;
    ifs >> ch;
    if (ifs.eof()) {
        // �����ļ�Ϊ��
        // cout << "�ļ�Ϊ��" << endl;
        this->m_EmpArray = nullptr;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        ifs.close();
        return ;
    }

    // 3���ļ����ڣ����Ҽ�¼����
    int num = this->get_EmpNum();
    // cout << "ְ������Ϊ��" << num << endl;
    this->m_EmpNum = num;

    this->m_EmpArray = new Worker * [this->m_EmpNum];
    // ���ļ��е����ݴ洢��������
    this->Init_Emp();

    // ���Դ���

    /*for (int i = 0; i < this->m_empnum; i++) {
        cout << "ְ����ţ�" << this->m_emparray[i]->m_id << " "
            << "ְ��������" << this->m_emparray[i]->m_name << " "
            << "���ű�ţ�" << this->m_emparray[i]->m_deptid << endl;
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
    cout << "*******   0.�˳��������   *******" << endl;
    cout << "*******   1.����ְ����Ϣ   *******" << endl;
    cout << "*******   2.��ʾְ����Ϣ   *******" << endl;
    cout << "*******   3.ɾ����ְְ��   *******" << endl;
    cout << "*******   4.�޸�ְ����Ϣ   *******" << endl;
    cout << "*******   5.����ְ����Ϣ   *******" << endl;
    cout << "*******   6.���ձ������   *******" << endl;
    cout << "*******   7.��������ĵ�   *******" << endl;
    cout << "**********************************" << endl;
    cout << endl;
}

void WorkerManager::Exit_System()
{
    cout << "��ӭ�´�ʹ�ã�" << endl;
    system("pause");
    exit(0);
}

// ���ְ��
void WorkerManager::add_Emp()
{
    cout << "��������ӵ�ְ��������" << endl;
    int addNum = 0;
    cin >> addNum;
    if (addNum > 0) {
        // ���
        // ��������µĿռ��С
        // �¿ռ������ = ԭ����¼���� + ��������
        int newSize = this->m_EmpNum + addNum;

        // �����¿ռ�
        Worker** newSpace = new Worker*[newSize];

        // ��ԭ���ռ��µ����ݣ��������¿ռ���
        if (this->m_EmpArray != nullptr) {
            for (int i = 0; i < this->m_EmpNum; i++) {
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        // ���������
        for (int i = 0; i < addNum; i++) {
            int id; // ְ�����
            string name; // ְ������
            int dSelect; // ����ѡ��
            cout << "������ " << i + 1 << "����ְ����ţ�" << endl;
            cin >> id;

            cout << "������ " << i + 1 << "����ְ��������" << endl;
            cin >> name;

            cout << "��ѡ���ְ���ĸ�λ��" << endl;
            cout << "1����ְͨ��" << endl;
            cout << "2������" << endl;
            cout << "3���ܲ�" << endl;

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
            // ��������ְ��ָ�뱣�浽������
            newSpace[this->m_EmpNum + i] = worker;
        }
        delete[]this->m_EmpArray;

        // �����¿ռ��ָ��
        this->m_EmpArray = newSpace;

        // ����ְ������
        this->m_EmpNum = newSize;
        this->m_FileIsEmpty = false;

        // ��ʾ��ӳɹ�
        cout << "��ӳɹ�" << addNum << "����ְ��" << endl;

        // �������ݵ��ļ���
        this->save();
    } else {
        cout << "�������" << endl;
    }
    // ��������������ص��ϼ�Ŀ¼
    system("pause");
    system("cls");
}

// �����ļ�
void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out); // ������ķ�ʽ���ļ� ==д�ļ�
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

// ��ʼ��ְ��
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
            // ��ְͨ��
            worker = new Employee(id, name, did);
        } else if (did == 2) {
            // ����
            worker = new Manager(id, name, did);
        } else {
            // �ܲ�
            worker = new Boss(id, name, did);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }

    // �ر��ļ�
    ifs.close();
}

// ��ʾְ��
void WorkerManager::show_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
    }
    for (int i = 0; i < m_EmpNum; i++) {
        // ���øö�̬���ó���ӿ�
        this->m_EmpArray[i]->showInfo();
    }
    // �������������
    system("pause");
    system("cls");
}

// �ж�ְ���Ƿ����
int WorkerManager::exit_Emp(int id)
{
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++) {
        if (this->m_EmpArray[i]->m_Id == id) {
            // �ҵ�ְ��
            index = i;
            break;
        }   
    }
    return index;
}
// ɾ��ְ��
void WorkerManager::del_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl;
    }

    // ����ְ���ı��ɾ��ְ��
    cout << "��������Ҫɾ����ְ����ţ�" << endl;
    int id = 0;
    cin >> id;
    int num = this->exit_Emp(id);
    if (num != -1) {
        // ˵��ְ�����ڣ�����Ҫɾ��numλ�õ�ְ��
        // ����ǰ��
        for (int i = num; i < this->m_EmpNum - 1; i++) {
            this->m_EmpArray[i] = this->m_EmpArray[i + 1];
        }
        this->m_EmpNum--; // ���������м�¼����Ա����
        // ͬ�����µ��ļ���
        this->save();

        cout << "ɾ���ɹ�" << endl;
    } else {
        cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
    }
    system("pause");
    system("cls");
}

// �޸�ְ��
void WorkerManager::Mod_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl;
    }
    cout << "�������޸�ְ���ı�ţ�" << endl;
    int id = 0;
    cin >> id;
    int exitNum = this->exit_Emp(id);
    if (exitNum != -1) {
        delete this->m_EmpArray[exitNum];
        int newid = 0;
        string newname = "";
        int dselect = 0;
        cout << "���ҵ�" << id << "��ְ������������ְ���ţ�" << endl;
        cin >> newid;
        cout << "��������������" << endl;
        cin >> newname;
        cout << "�������¸�λ��" << endl;
        cout << "1����ְͨ��" << endl;
        cout << "2������" << endl;
        cout << "3���ܲ�" << endl;
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

        // �������� ��������
        this->m_EmpArray[exitNum] = worker;
        cout << "�޸ĳɹ�!" << endl;

        // ��������ļ�
        this->save();
    } else {
        cout << "�޸�ʧ�ܣ����޴���" << endl;
    }

    // �����������
    system("pause");
    system("cls");
}

// ����ְ��
void WorkerManager::Find_Emp()
{
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
    }
    cout << "��������ҷ�ʽ��" << endl;
    cout << "1������ְ����Ų���" << endl;
    cout << "2������ְ����������" << endl;
    int fselect = 0;
    cin >> fselect;
    if (fselect == 1) {
        // ���ձ�Ų���
        int id;
        cout << "������Ҫ����ְ���ı�ţ�" << endl;
        cin >> id;

        int ret = exit_Emp(id);
        if (ret != -1) {
            // �ҵ���ְ��
            cout << "����ְ������ְ������Ϣ���£�" << endl;
            this->m_EmpArray[ret]->showInfo();
        }
        else {
            cout << "����ʧ�ܣ����޴��ˣ�" << endl;
        }

    }
    else if (fselect == 2) {
        // ������������
        string name;
        cout << "������Ҫ���ҵ�ְ��������" << endl;
        cin >> name;
        // �����ж��Ƿ�鵽�ı�ʶ
        bool flag = false;

        for (int i = 0; i < this->m_EmpNum; i++) {
            if (this->m_EmpArray[i]->m_Name == name) {
                cout << "���ҳɹ���ְ�����Ϊ" << this->m_EmpArray[i]->m_Id << "�ŵ���Ϣ���£�" << endl;
                flag = true;
                this->m_EmpArray[i]->showInfo();
            }
        }
        if (flag == false) {
            cout << "����ʧ�ܣ����޴��ˣ�" << endl;
        }

    } else {
        cout << "����ѡ����������������" << endl;
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

// ְ������,ѡ������
void WorkerManager::Sort_Emp() {
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
        system("pause");
        system("cls");
    }

    cout << "��ѡ������ʽ��" << endl;
    cout << "1������ְ���Ž�������" << endl;
    cout << "2������ְ���Ž��н���" << endl;
    int select = 0;
    cin >> select;
    for (int i = 0; i < m_EmpNum; i++) {
        int minOrMax = i; // ������Сֵ ���� ���ֵ���±�
        for (int j = i + 1; j < this->m_EmpNum; j++) {
            if (select == 1) {
                // ����
                if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id) {
                    minOrMax = j;
                } 
            } else {
                // ����
                if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id) {
                    minOrMax = j;
                }
            }
        }
        // �ж�һ��ʼ�϶�����Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ��������ǣ���������
        if (i != minOrMax) {
            Worker* tmp = this->m_EmpArray[i];
            this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
            this->m_EmpArray[minOrMax] = tmp;
        }
    }
    cout << "����ɹ��������Ľ��Ϊ��" << endl;
    this->save();  // �����Ľ�����浽�ļ���
    this->show_Emp(); // չʾ���е�ְ��
}

// ����ļ�
void WorkerManager::clear_File()
{
    if (this->m_FileIsEmpty) {
        cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "ȷ������ļ���" << endl;
    cout << "1��ȷ��" << endl;
    cout << "2������" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        // ��ģʽ��ios::trunc
        ofstream ofs(FILENAME, ios::trunc); // ɾ���ļ������´���
        ofs.close();
        if (this->m_EmpArray != nullptr) {
            // ɾ��ÿ��������ְ������
            for (int i = 0; i < this->m_EmpNum; i++) {
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = nullptr;
            }
            // ɾ����������ָ��
            delete[]this->m_EmpArray;
            this->m_EmpArray = nullptr;
            this->m_EmpNum = 0;
            this->m_FileIsEmpty = true;
        }
        cout << "��ճɹ���" << endl;
    }
    system("pause");
    system("cls");
}