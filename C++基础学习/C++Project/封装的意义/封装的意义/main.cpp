#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

// �жϵ��Բ�Ĺ�ϵ
void PointisCircle(Circle& c, Point& p)
{
    // ������Բ��֮��ľ����ƽ��
    int distance =
        ((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())) +
        ((c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()));
    // ����뾶��ƽ��
    int rdiscenter = c.getR() * c.getR();

    // �ж�
    if (distance > rdiscenter) {
        cout << "����Բ��" << endl;
    }
    else if (distance < rdiscenter) {
        cout << "����Բ��" << endl;
    }
    else {
        cout << "����Բ��" << endl;
    }

}
int main()
{
    // ����Բ����
    Circle c;
    c.setR(10);

    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    // ����Point
    Point p;
    p.setX(10);
    p.setY(10);

    // �жϹ�ϵ
    PointisCircle(c, p);

    system("pause");
    return 0;
}