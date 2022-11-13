#include <iostream>
#include <string>
#include <ctime>

constexpr int STUDENT_NUM = 5;
constexpr int TEACHER_NUM = 3;
struct Student {
    std::string sname;
    double score;

};

struct Teacher {
    std::string tname;
    struct Student stuArray[STUDENT_NUM];
};

// 给老师和学生赋值的函数
void allocateSpace(struct Teacher teaArray[], int len)
{
    std::string nameSeed = "ABCDE";
    for (size_t i = 0; i < len; i++) {
        teaArray[i].tname = "Teacher_";
        teaArray[i].tname += nameSeed[i];

        // 通过循环给每名老师所带的学生赋值
        for (size_t j = 0; j < STUDENT_NUM; j++) {
            teaArray[i].stuArray[j].sname = "student_";
            teaArray[i].stuArray[j].sname += nameSeed[j];

            int rnddom = rand() % 61 + 40;
            teaArray[i].stuArray[j].score = rnddom;
        }
        
    }
}

void printInfo(struct Teacher teaArray[], int len)
{
    for (int i = 0; i < TEACHER_NUM; i++) {
        std::cout << "老师姓名：" << teaArray[i].tname << std::endl;
        for (int j = 0; j < STUDENT_NUM; j++) {
            std::cout << "\t学生姓名：" << teaArray[i].stuArray[j].sname << 
                       "  考试得分：" << teaArray[i].stuArray[j].score << std::endl;
        }
    }
}
int main()
{
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 创建3名老师的数组
    struct Teacher teaArray[TEACHER_NUM];
    // 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len = sizeof(teaArray) / sizeof(teaArray[0]);
    allocateSpace(teaArray, len);
    // 打印所有老师及所带学生的信息
    printInfo(teaArray, len);

    system("pause");
    return 0;
}

