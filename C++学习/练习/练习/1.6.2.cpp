#include <iostream>
using namespace std;

int main()
{
    int a = 0;//���岢��ʼ��һ�����ͱ���
    cout << "������һ��������";
    cin >> a;
    int abs_a = 0;
    if (a < 0)
    {
        abs_a = -a;//a���෴��
    }
    else
    {
        abs_a = a;//a����
    }
    cout << "a�ľ���ֵΪ��" << abs_a;
    return 0;
}