#include <iostream>
#include <string>

// const ʹ�õĳ���
struct student {
    std::string name;
    int age;
    int score;
};

// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printstudent(const student *s)
{
    // s->age = 150; // ��ֹ�Խṹ���е����ݽ����޸ģ�ָ�봫��
    std::cout << "������" << s->name << "  ���䣺" << s->age << "  ������" << s->score << std::endl;
}
int main()
{

    // �����ṹ�����
    struct  student s = { "����", 15, 70 };

    // ͨ����������ӡ�ṹ���������Ϣ
    printstudent(&s);

    std::cout << "������ ������" << s.name << "  ���䣺" << s.age << "  ������" << s.score << std::endl;
    system("pause");
    return 0;
}