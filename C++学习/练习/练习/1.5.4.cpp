#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
using namespace std;


void test2() {
    std::default_random_engine e;
    std::uniform_real_distribution<double> u(-1.0, 1.0); // 左闭右闭区间，产生均匀分布的实数
    e.seed(time(0));

    double x, y, r, pi;
    int n = 0, N = 1e7;
    for (int i = 0; i < N; ++i)
    {
        x = u(e);//取值为0-1之间的随机数
        y = u(e);
        r = sqrt(x * x + y * y);
        if (r < 1)
        {
            //(1) your code
            n++;
        }
    }
    pi = n * 4.0 / N;
    cout << pi << endl;

}

void test3() {
    cout.precision(20);//小数部分20位有效数字

    int n = 100;//迭代次数
    double S = 1;// S0=1
    double Sum = S;

    for (int m = 1; m < n; ++m)
    {
        // 下面的代码中int和double在一起运算，运算结果类型为double类型
        S = m / (2 * m + 1.0) * S;
        // (2) your code

        Sum += S;



    }

    double pi = 2 * Sum;
    cout << "pi=" << pi << endl;
}


int main()
{
    test2();
    return 0;
}