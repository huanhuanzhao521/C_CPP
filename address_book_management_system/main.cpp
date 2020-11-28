//
// Created by Administrator on 2020/11/22 0022.
//
#include <iostream>
#include <string>
using namespace std;
/*通讯录是一个可以记录亲人、好友信息的工具。
系统中需要实现的功能如下：
* 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
* 显示联系人：显示通讯录中所有联系人信息
* 删除联系人：按照姓名进行删除指定联系人
* 查找联系人：按照姓名查看指定联系人信息
* 修改联系人：按照姓名重新修改指定联系人
* 清空联系人：清空通讯录中所有信息
* 退出通讯录：退出当前使用的通讯录
*/

//1.显示界面
void showMenu(){
    cout << "******************************"<< endl;
    cout << "*****  1.添加联系人  *****" << endl;
    cout << "*****  2.显示联系人  *****" << endl;
    cout << "*****  3.删除联系人  *****" << endl;
    cout << "*****  4.查找联系人  *****" << endl;
    cout << "*****  5.修改联系人  *****" << endl;
    cout << "*****  6.清空联系人  *****" << endl;
    cout << "*****  0.退出通讯录  *****" << endl;
    cout << "******************************"<< endl;

}

//添加联系人
//实现添加联系人功能，联系人上限为1000人，
// 联系人信息包括（姓名、性别、年龄、联系电话、家庭住址）

//添加联系人实现步骤：

//设计联系人结构体
//设计通讯录结构体
//main函数中创建通讯录
//封装添加联系人函数
//测试添加联系人功能
struct Person {
    string m_Name;
    int m_Sex; //1 男  2 女
    int m_Age;
    string m_Phone;
    string m_Addr;
};
#define MAX 1000
struct AddressBooks{
    struct Person personArray[MAX];
    int m_Size;  //记录通讯录中人数个数
};

// 封装添加联系人的函数
void addPerson(AddressBooks *abs){
    if (abs->m_Size == MAX){
        cout << "电话簿联系人已满，不在添加联系人" << endl;
        return;
    }
    else {
        string name;
        cout << "请输入姓名： " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2){
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else {
                cout << "输入性别有误，请重新输入" << endl;
            }

        }
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        cout << "请输入联系电话" << endl;
        string phone = " ";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        cout << "请输入家庭住址" << endl;
        string address = "";
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        //更新通讯录人数
        abs->m_Size++;
        cout << "添加成功" << endl;
    }
}

// 显示联系人
void showPerson(AddressBooks *abs){
    if (abs->m_Size == 0){
        cout << "通讯录为空" << endl;
    }
    else{
        for (int i=0; i<abs->m_Size; i++){
            cout << "姓名：" << abs->personArray[i].m_Name << endl;
            cout << "性别：" << abs->personArray[i].m_Sex << endl;
            cout << "年龄：" << abs->personArray[i].m_Age << endl;
            cout << "家庭电话：" << abs->personArray[i].m_Phone << endl;
            cout << "家庭住址：" << abs->personArray[i].m_Addr << endl;
        }
    }


}

//查找联系人, -1表示查无此人，其他索引则是查找到的人的索引
int isExist(AddressBooks *abs, string name){
    if (abs->m_Size == 0){
        cout << "通讯录为空, 没有要查找的人" << endl;
        return -1;
    }
    else{
        for (int i=0; i<abs->m_Size; i++){
            if (abs->personArray[i].m_Name == name){
                return i;
                break;
            }
        }
        return -1;
    }
}
//查找联系人
void findPerson(AddressBooks *abs){
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1) {
        cout << "找不到要寻找的人" << endl;
    }
    else {
        cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
        cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
        cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
        cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
        cout << "住址：" << abs->personArray[ret].m_Addr << endl;
    }

}

// 删除联系人
void deletePerson(AddressBooks *abs){
    cout << "请输入您要删除的联系人姓名" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if (index == -1) {
        cout << "找不到要寻找的人" << endl;
    }
    else {
        for (int i = index; i < abs->m_Size; i++) {
            abs->personArray[i] = abs->personArray[i+1];

        }
        abs->m_Size--;
        cout << "删除成功" << endl;

    }

}

//修改联系人
void modifyPerson(AddressBooks *abs){
    cout << "请输入您要修改的联系人姓名" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if (index == -1) {
        cout << "找不到要修改的人" << endl;
    }
    else {
        string name;
        cout << "请输入姓名： " << endl;
        cin >> name;
        abs->personArray[index].m_Name = name;
        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2){
                abs->personArray[index].m_Sex = sex;
                break;
            }
            else {
                cout << "输入性别有误，请重新输入" << endl;
            }

        }
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[index].m_Age = age;

        cout << "请输入联系电话" << endl;
        string phone = " ";
        cin >> phone;
        abs->personArray[index].m_Phone = phone;

        cout << "请输入家庭住址" << endl;
        string address = "";
        cin >> address;
        abs->personArray[index].m_Addr = address;
        cout << "修改成功" << endl;
    }

}
// 清空联系人
void cleanPerson(AddressBooks *abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空" << endl;
    system("pause");
    system("cls");
}
int main() {
    int select = 0;
    AddressBooks abs;
    abs.m_Size = 0;
    while (true){
        showMenu();
        cin >> select;
        switch (select){
            case 1: //添加联系人
                addPerson(&abs);
                break;
            case 2: //显示联系人
                showPerson(&abs);
                break;
            case 3: //删除联系人
                deletePerson(&abs);
                break;
            case 4: //查找联系人
                findPerson(&abs);
                break;
            case 5: //修改联系人
                modifyPerson(&abs);
                break;
            case 6: //清空联系人
                cleanPerson(&abs);
                break;
            case 0: //退出通讯录
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

