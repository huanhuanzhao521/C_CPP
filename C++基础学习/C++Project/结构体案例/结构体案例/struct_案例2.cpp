#include <iostream>
#include <string>


// ���Ӣ�۵Ľṹ��
struct Hero {
    std::string name;
    int age;
    std::string sex;
};

constexpr int HERO_NUM = 5;

// ð������ʵ���������������
void bubbleSort(struct Hero heroArr[], int len)
{
    for (size_t i = 0; i < len - 1; i++) {
        for (size_t j = 0; j < len - i - 1; j++) {
            // ���j�±��Ԫ�ص��������j+1�±��Ԫ�ص����䣬��������Ԫ��
            if (heroArr[j].age > heroArr[j + 1].age) {
                struct Hero temp = heroArr[j];
                heroArr[j] = heroArr[j + 1];
                heroArr[j + 1] = temp;
            }
        }
    }
}

// ��ӡ����������Ԫ��
void printInfoHero(struct Hero heroArr[], int len)
{
    std::cout << "�����Ĵ�ӡ��Ϣ��" << std::endl;
    for (size_t i = 0; i < len; i++) {
        std::cout << "Ӣ��������" << heroArr[i].name << "  �Ա�" << heroArr[i].sex
            << "  ���䣺" << heroArr[i].age << std::endl;
    }
}

int main()
{
    // ����������5��Ӣ��
    struct Hero heroArr[HERO_NUM] = {
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"}
    };
    int len = sizeof(heroArr) / sizeof(heroArr[0]);
    std::cout << "����ǰ�Ĵ�ӡ��Ϣ��" << std::endl;
    for (size_t i = 0; i < HERO_NUM; i++) {
        std::cout << "Ӣ��������" << heroArr[i].name << "  �Ա�" << heroArr[i].sex
            << "  ���䣺" << heroArr[i].age << std::endl;
    }
    // ������������򣬰������������������
    bubbleSort(heroArr,len);
    // �������Ľ����ӡ���
    printInfoHero(heroArr, len);

    system("pause");
    return 0;
}