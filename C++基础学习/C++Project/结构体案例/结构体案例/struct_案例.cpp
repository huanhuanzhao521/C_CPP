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

// ����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher teaArray[], int len)
{
    std::string nameSeed = "ABCDE";
    for (size_t i = 0; i < len; i++) {
        teaArray[i].tname = "Teacher_";
        teaArray[i].tname += nameSeed[i];

        // ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
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
        std::cout << "��ʦ������" << teaArray[i].tname << std::endl;
        for (int j = 0; j < STUDENT_NUM; j++) {
            std::cout << "\tѧ��������" << teaArray[i].stuArray[j].sname << 
                       "  ���Ե÷֣�" << teaArray[i].stuArray[j].score << std::endl;
        }
    }
}
int main()
{
    // ���������
    srand((unsigned int)time(NULL));
    // ����3����ʦ������
    struct Teacher teaArray[TEACHER_NUM];
    // ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
    int len = sizeof(teaArray) / sizeof(teaArray[0]);
    allocateSpace(teaArray, len);
    // ��ӡ������ʦ������ѧ������Ϣ
    printInfo(teaArray, len);

    system("pause");
    return 0;
}

