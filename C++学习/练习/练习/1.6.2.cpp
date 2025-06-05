#include <iostream>
using namespace std;

int main()
{
    int a = 0;//定义并初始化一个整型变量
    cout << "请输入一个整数：";
    cin >> a;
    int abs_a = 0;
    if (a < 0)
    {
        abs_a = -a;//a的相反数
    }
    else
    {
        abs_a = a;//a本身
    }
    cout << "a的绝对值为：" << abs_a;
    return 0;
}