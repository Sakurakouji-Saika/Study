#include <iostream>
using namespace std;

int CommFactor(int m, int n)
{
    cout << m << " �� " << n << " �����Լ�� ��";

    int z = m % n;
    while (z != 0)//����m��n˭��˭С������Ӱ�����࣬�ο�����ͼƬ
    {
        m = n;
        //(1) your code 
        n = z;
        z = m % n;

    }
    //n�������һ�β���0��ֵ����Ϊ����ֵ
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