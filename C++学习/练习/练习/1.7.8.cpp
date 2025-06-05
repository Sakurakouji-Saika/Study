#include <iostream>
using namespace std;

int CommFactor(int m, int n)
{
    cout << m << " 和 " << n << " 的最大公约数 ：";

    int z = m % n;
    while (z != 0)//不管m和n谁大谁小，都不影响求余，参考上文图片
    {
        m = n;
        //(1) your code 
        n = z;
        z = m % n;

    }
    //n总是最后一次不会0的值，作为返回值
    cout << n << endl;
    return n;
}
int main()
{
    CommFactor(1, 1);
    CommFactor(2, 4);
    CommFactor(4, 2);
    CommFactor(2, 8);
    CommFactor(8, 2);
    CommFactor(10000, 10);
    CommFactor(7, 9);
    CommFactor(1997, 615);

    return 0;
}