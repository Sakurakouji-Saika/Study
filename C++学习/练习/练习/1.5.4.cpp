#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
using namespace std;


void test2() {
    std::default_random_engine e;
    std::uniform_real_distribution<double> u(-1.0, 1.0); // ����ұ����䣬�������ȷֲ���ʵ��
    e.seed(time(0));

    double x, y, r, pi;
    int n = 0, N = 1e7;
    for (int i = 0; i < N; ++i)
    {
        x = u(e);//ȡֵΪ0-1֮��������
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
    cout.precision(20);//С������20λ��Ч����

    int n = 100;//��������
    double S = 1;// S0=1
    double Sum = S;

    for (int m = 1; m < n; ++m)
    {
        // ����Ĵ�����int��double��һ�����㣬����������Ϊdouble����
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