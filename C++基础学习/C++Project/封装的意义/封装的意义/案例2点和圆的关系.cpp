#include <iostream>
using namespace std;


// 点类
class Point
{
public:
    // 设置x
    void setX(int x)
    {
        m_x = x;
    }
    // 获取x
    int getX()
    {
        return m_x;
    }
    // 设置y
    void setY(int y)
    {
        m_y = y;
    }
    // 获取y
    int getY()
    {
        return m_y;
    }
private:
    int m_x;
    int m_y;
};

// 圆类
class Circle
{
public:
    // 设置半径
    void setR(int r)
    {
        m_R = r;
    }
    // 获取半径
    int getR()
    {
        return m_R;
    }
    // 设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }
    
    // 获取圆心
    Point getCenter()
    {
        return m_Center;
    }

private:
    int m_R; // 半径

    // 在类中可以让另一个类 作为本类中的成员
    Point m_Center;  // 圆心

};

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
    } else if (distance < rdiscenter) {
        cout << "点在圆内" << endl;
    } else {
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