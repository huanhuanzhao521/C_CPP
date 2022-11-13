#include <iostream>
#include <string>

// const 使用的场景
struct student {
    std::string name;
    int age;
    int score;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printstudent(const student *s)
{
    // s->age = 150; // 防止对结构体中的数据进行修改，指针传递
    std::cout << "姓名：" << s->name << "  年龄：" << s->age << "  分数：" << s->score << std::endl;
}
int main()
{

    // 创建结构体变量
    struct  student s = { "张三", 15, 70 };

    // 通过函数来打印结构体变量的信息
    printstudent(&s);

    std::cout << "主函数 姓名：" << s.name << "  年龄：" << s.age << "  分数：" << s.score << std::endl;
    system("pause");
    return 0;
}