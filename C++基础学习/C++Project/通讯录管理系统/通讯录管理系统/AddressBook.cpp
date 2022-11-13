// 封装函数显示界面，如 void showMenu()
// 在main函数中调用封装好的函数

#include <iostream>
#include <string>
using namespace std;

constexpr int MAX_NUM = 1000;

// 设计联系人的结构体
struct Person {
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
// 设计通讯录的结构体
struct AddressBooks {
    // 通讯录中保存联系人的数组
    struct Person personArr[MAX_NUM];
    // 通讯录中当前记录联系人的个数
    int m_Size;
};

// 添加联系人
void addPerson(AddressBooks* abs)
{
    // 判断通讯录是否已满，如果满了就不再添加；
    if (abs->m_Size == MAX_NUM) {
        cout << "通讯录已满，无法添加！" << endl;
    } else {
        // 添加具体的联系人

        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArr[abs->m_Size].m_Name = name;

        // 性别
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArr[abs->m_Size].m_Sex = sex;
                break;
            }
        }
        
        // 年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArr[abs->m_Size].m_Age = age;

        // 电话
        cout << "请输入联系电话：" << endl;
        string  phone;
        cin >> phone;
        abs->personArr[abs->m_Size].m_Phone = phone;

        // 住址
        cout << "请输入家庭住址：" << endl;
        string  address;
        cin >> address;
        abs->personArr[abs->m_Size].m_Addr = address;

        // 更新通讯录人数
        abs->m_Size++;

        cout << "添加成功！" << endl;

        system("pause"); // 请按任意键继续
        system("cls"); // 清屏操作
    }
}

// 显示联系人

void showPerson(AddressBooks* abs)
{
    // 判断通讯录中人数是否为0,如果为0，提示记录为空
    // 如果不为0，显示记录的联系人信息
    if (abs->m_Size == 0) {
        cout << "通讯录中为空" << endl;
    } else {
        for (size_t i = 0; i < abs->m_Size; i++) {
            cout << "姓名：" << abs->personArr[i].m_Name << "\t";
            cout << "性别：" << (abs->personArr[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArr[i].m_Age << "\t";
            cout << "电话：" << abs->personArr[i].m_Phone << "\t";
            cout << "住址：" << abs->personArr[i].m_Addr << endl;
        }
    }
    system("pause");
    system("cls");
}

// 检测联系人是否存在，如果存在，返回联系人所在数组中的位置，不存在则返回-1

int IsExists(AddressBooks* abs, string name)
{
    for (size_t i = 0; i < abs->m_Size; i++) {
        // 找到用户姓名
        if (abs->personArr[i].m_Name == name) {
            return i;
        }
    }
    // 如果遍历结束都没有找到，返回-1
    return -1;
}

// 根据姓名删除联系人
void deletePerson(AddressBooks* abs)
{
    cout << "请输入你要删除的联系人：" << endl;
    string name;
    cin >> name;
    int ret = IsExists(abs, name);
    if (ret != -1) {
        for (size_t i = 0; i < abs->m_Size; i++) {
            // 数据前移操作
            abs->personArr[i] = abs->personArr[i + 1];
        }
        // 更新通讯录中的人员数
        abs->m_Size--;
        cout << "删除成功" << endl;
    } else {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}


// 查找指定的联系人信息
void FindPerson(AddressBooks* abs)
{
    cout << "请输入你要查找的联系人：" << endl;
    string name;
    cin >> name;
    // 判断通讯录中指定的联系人是否存在
    int ret = IsExists(abs, name);
    if (ret != -1) {
        cout << "姓名：" << abs->personArr[ret].m_Name << "\t";
        cout << "性别：" << abs->personArr[ret].m_Sex  << "\t";
        cout << "年龄：" << abs->personArr[ret].m_Age << "\t";
        cout << "电话：" << abs->personArr[ret].m_Phone << "\t";
        cout << "住址：" << abs->personArr[ret].m_Addr << endl;
    } else {
        cout << "查无此人！" << endl;
    }
    system("pause");
    system("cls");
}

// 修改指定联系人的信息
void ModifyPerson(AddressBooks* abs)
{
    cout << "请输入您要修改的联系人：" << endl;
    string name;
    cin >> name;
    int ret = IsExists(abs, name);
    if (ret != -1) {
        // 姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArr[ret].m_Name = name;
        // 性别
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArr[ret].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入!" << endl;
        }
        
        // 年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArr[ret].m_Age = age;
        // 电话
        cout << "请输入联系电话：" << endl;
        string phone;
        cin >> phone;
        abs->personArr[ret].m_Phone = phone;

        // 住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArr[ret].m_Addr = address;

        cout << "修改成功！" << endl;

    } else {
        cout << "查无此人！" << endl;
    }
    system("pause");
    system("cls");
}

// 清空联系人
void cleanPerson(AddressBooks* abs)
{
    abs->m_Size = 0; // 将当前记录联系人的数量置为 0 ，做逻辑上的清空
    cout << "通讯录已经清空！" << endl;
    system("pause");
    system("cls");
}
// 1、显示菜单界面
void showMenu()
{
    std::cout << "*****************************" << endl;
    std::cout << "*****   1、添加联系人   *****" << endl;
    std::cout << "*****   2、显示联系人   *****" << endl;
    std::cout << "*****   3、删除联系人   *****" << endl;
    std::cout << "*****   4、查找联系人   *****" << endl;
    std::cout << "*****   5、修改联系人   *****" << endl;
    std::cout << "*****   6、清空联系人   *****" << endl;
    std::cout << "*****   0、退出通讯录   *****" << endl;
    std::cout << "*****************************" << endl;
}


int main()
{
    // 创建通讯录结构体变量
    AddressBooks abs;
    // 初始化通讯录中当前人员的个数
    abs.m_Size = 0;
    // 创建用户选择输入的变量
    int select = 0;

    while (true) {
        // 菜单的调用
        showMenu();

        // 退出功能
        cin >> select;
        switch (select) {
            case 1: // 1、添加联系人
                addPerson(&abs);  // 利用地址传递可以修饰实参
                break;
            case 2: // 2、显示联系人
                showPerson(&abs);
                break;
            case 3: // 3、删除联系人
                deletePerson(&abs);
                break;
            case 4: // 4、查找联系人
                FindPerson(&abs);
                break;
            case 5: // 5、修改联系人
                ModifyPerson(&abs);
                break;
            case 6: // 6、清空联系人
                cleanPerson(&abs);
                break;
            case 0: // 0、退出通讯录
                cout << "欢迎下次使用" << endl;
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