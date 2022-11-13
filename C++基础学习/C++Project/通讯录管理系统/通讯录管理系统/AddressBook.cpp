// ��װ������ʾ���棬�� void showMenu()
// ��main�����е��÷�װ�õĺ���

#include <iostream>
#include <string>
using namespace std;

constexpr int MAX_NUM = 1000;

// �����ϵ�˵Ľṹ��
struct Person {
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
// ���ͨѶ¼�Ľṹ��
struct AddressBooks {
    // ͨѶ¼�б�����ϵ�˵�����
    struct Person personArr[MAX_NUM];
    // ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
    int m_Size;
};

// �����ϵ��
void addPerson(AddressBooks* abs)
{
    // �ж�ͨѶ¼�Ƿ�������������˾Ͳ�����ӣ�
    if (abs->m_Size == MAX_NUM) {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
    } else {
        // ��Ӿ������ϵ��

        //����
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArr[abs->m_Size].m_Name = name;

        // �Ա�
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArr[abs->m_Size].m_Sex = sex;
                break;
            }
        }
        
        // ����
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArr[abs->m_Size].m_Age = age;

        // �绰
        cout << "��������ϵ�绰��" << endl;
        string  phone;
        cin >> phone;
        abs->personArr[abs->m_Size].m_Phone = phone;

        // סַ
        cout << "�������ͥסַ��" << endl;
        string  address;
        cin >> address;
        abs->personArr[abs->m_Size].m_Addr = address;

        // ����ͨѶ¼����
        abs->m_Size++;

        cout << "��ӳɹ���" << endl;

        system("pause"); // �밴���������
        system("cls"); // ��������
    }
}

// ��ʾ��ϵ��

void showPerson(AddressBooks* abs)
{
    // �ж�ͨѶ¼�������Ƿ�Ϊ0,���Ϊ0����ʾ��¼Ϊ��
    // �����Ϊ0����ʾ��¼����ϵ����Ϣ
    if (abs->m_Size == 0) {
        cout << "ͨѶ¼��Ϊ��" << endl;
    } else {
        for (size_t i = 0; i < abs->m_Size; i++) {
            cout << "������" << abs->personArr[i].m_Name << "\t";
            cout << "�Ա�" << (abs->personArr[i].m_Sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << abs->personArr[i].m_Age << "\t";
            cout << "�绰��" << abs->personArr[i].m_Phone << "\t";
            cout << "סַ��" << abs->personArr[i].m_Addr << endl;
        }
    }
    system("pause");
    system("cls");
}

// �����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������е�λ�ã��������򷵻�-1

int IsExists(AddressBooks* abs, string name)
{
    for (size_t i = 0; i < abs->m_Size; i++) {
        // �ҵ��û�����
        if (abs->personArr[i].m_Name == name) {
            return i;
        }
    }
    // �������������û���ҵ�������-1
    return -1;
}

// ��������ɾ����ϵ��
void deletePerson(AddressBooks* abs)
{
    cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
    string name;
    cin >> name;
    int ret = IsExists(abs, name);
    if (ret != -1) {
        for (size_t i = 0; i < abs->m_Size; i++) {
            // ����ǰ�Ʋ���
            abs->personArr[i] = abs->personArr[i + 1];
        }
        // ����ͨѶ¼�е���Ա��
        abs->m_Size--;
        cout << "ɾ���ɹ�" << endl;
    } else {
        cout << "���޴���" << endl;
    }
    system("pause");
    system("cls");
}


// ����ָ������ϵ����Ϣ
void FindPerson(AddressBooks* abs)
{
    cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
    string name;
    cin >> name;
    // �ж�ͨѶ¼��ָ������ϵ���Ƿ����
    int ret = IsExists(abs, name);
    if (ret != -1) {
        cout << "������" << abs->personArr[ret].m_Name << "\t";
        cout << "�Ա�" << abs->personArr[ret].m_Sex  << "\t";
        cout << "���䣺" << abs->personArr[ret].m_Age << "\t";
        cout << "�绰��" << abs->personArr[ret].m_Phone << "\t";
        cout << "סַ��" << abs->personArr[ret].m_Addr << endl;
    } else {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
    system("cls");
}

// �޸�ָ����ϵ�˵���Ϣ
void ModifyPerson(AddressBooks* abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
    string name;
    cin >> name;
    int ret = IsExists(abs, name);
    if (ret != -1) {
        // ����
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArr[ret].m_Name = name;
        // �Ա�
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArr[ret].m_Sex = sex;
                break;
            }
            cout << "������������������!" << endl;
        }
        
        // ����
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArr[ret].m_Age = age;
        // �绰
        cout << "��������ϵ�绰��" << endl;
        string phone;
        cin >> phone;
        abs->personArr[ret].m_Phone = phone;

        // סַ
        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArr[ret].m_Addr = address;

        cout << "�޸ĳɹ���" << endl;

    } else {
        cout << "���޴��ˣ�" << endl;
    }
    system("pause");
    system("cls");
}

// �����ϵ��
void cleanPerson(AddressBooks* abs)
{
    abs->m_Size = 0; // ����ǰ��¼��ϵ�˵�������Ϊ 0 �����߼��ϵ����
    cout << "ͨѶ¼�Ѿ���գ�" << endl;
    system("pause");
    system("cls");
}
// 1����ʾ�˵�����
void showMenu()
{
    std::cout << "*****************************" << endl;
    std::cout << "*****   1�������ϵ��   *****" << endl;
    std::cout << "*****   2����ʾ��ϵ��   *****" << endl;
    std::cout << "*****   3��ɾ����ϵ��   *****" << endl;
    std::cout << "*****   4��������ϵ��   *****" << endl;
    std::cout << "*****   5���޸���ϵ��   *****" << endl;
    std::cout << "*****   6�������ϵ��   *****" << endl;
    std::cout << "*****   0���˳�ͨѶ¼   *****" << endl;
    std::cout << "*****************************" << endl;
}


int main()
{
    // ����ͨѶ¼�ṹ�����
    AddressBooks abs;
    // ��ʼ��ͨѶ¼�е�ǰ��Ա�ĸ���
    abs.m_Size = 0;
    // �����û�ѡ������ı���
    int select = 0;

    while (true) {
        // �˵��ĵ���
        showMenu();

        // �˳�����
        cin >> select;
        switch (select) {
            case 1: // 1�������ϵ��
                addPerson(&abs);  // ���õ�ַ���ݿ�������ʵ��
                break;
            case 2: // 2����ʾ��ϵ��
                showPerson(&abs);
                break;
            case 3: // 3��ɾ����ϵ��
                deletePerson(&abs);
                break;
            case 4: // 4��������ϵ��
                FindPerson(&abs);
                break;
            case 5: // 5���޸���ϵ��
                ModifyPerson(&abs);
                break;
            case 6: // 6�������ϵ��
                cleanPerson(&abs);
                break;
            case 0: // 0���˳�ͨѶ¼
                cout << "��ӭ�´�ʹ��" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;

        }
    }
    system("pause");
    return 0;
}