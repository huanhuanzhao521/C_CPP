#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

// 判断点和圆的关系
void PointisCircle(Circle& c, Point& p)
{
    // 计算点和圆心之间的距离的平方
    int distance =
        ((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())) +
        ((c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()));
    // 计算半径的平方
    int rdiscenter = c.getR() * c.getR();

    // 判断
    if (distance > rdiscenter) {
        cout << "点在圆外" << endl;
    }
    else if (distance < rdiscenter) {
        cout << "点在圆内" << endl;
    }
    else {
        cout << "点在圆上" << endl;
    }

}
int main()
{
    // 创建圆对象
    Circle c;
    c.setR(10);

    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    // 创建Point
    Point p;
    p.setX(10);
    p.setY(10);

    // 判断关系
    PointisCircle(c, p);

    system("pause");
    return 0;
}