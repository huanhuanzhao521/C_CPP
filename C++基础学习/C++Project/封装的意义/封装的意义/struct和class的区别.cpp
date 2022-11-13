#include <iostream>
using namespace std;

class C1 {
    int a1;  // 默认权限是私有
};

struct C2 {
    int a1; // 默认权限是 公共
};
int main()
{
    C1 c1;
    // c1.a1 = 100;  // 不可访问

    C2 c2;
    c2.a1 = 100;  // struct默认是权限是公共，因此可以访问

    system("pause");
    return 0;
}