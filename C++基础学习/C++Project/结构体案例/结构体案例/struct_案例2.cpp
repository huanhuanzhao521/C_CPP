#include <iostream>
#include <string>


// 设计英雄的结构体
struct Hero {
    std::string name;
    int age;
    std::string sex;
};

constexpr int HERO_NUM = 5;

// 冒泡排序，实现年龄的升序排序
void bubbleSort(struct Hero heroArr[], int len)
{
    for (size_t i = 0; i < len - 1; i++) {
        for (size_t j = 0; j < len - i - 1; j++) {
            // 如果j下标的元素的年龄大于j+1下标的元素的年龄，交换两个元素
            if (heroArr[j].age > heroArr[j + 1].age) {
                struct Hero temp = heroArr[j];
                heroArr[j] = heroArr[j + 1];
                heroArr[j + 1] = temp;
            }
        }
    }
}

// 打印排序后的数组元素
void printInfoHero(struct Hero heroArr[], int len)
{
    std::cout << "排序后的打印信息：" << std::endl;
    for (size_t i = 0; i < len; i++) {
        std::cout << "英雄姓名：" << heroArr[i].name << "  性别：" << heroArr[i].sex
            << "  年龄：" << heroArr[i].age << std::endl;
    }
}

int main()
{
    // 创建数组存放5名英雄
    struct Hero heroArr[HERO_NUM] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    int len = sizeof(heroArr) / sizeof(heroArr[0]);
    std::cout << "排序前的打印信息：" << std::endl;
    for (size_t i = 0; i < HERO_NUM; i++) {
        std::cout << "英雄姓名：" << heroArr[i].name << "  性别：" << heroArr[i].sex
            << "  年龄：" << heroArr[i].age << std::endl;
    }
    // 对数组进行排序，按照年龄进行升序排序
    bubbleSort(heroArr,len);
    // 将排序后的结果打印输出
    printInfoHero(heroArr, len);

    system("pause");
    return 0;
}