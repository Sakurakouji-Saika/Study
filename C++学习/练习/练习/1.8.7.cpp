#include <iostream>
using namespace std;

//��ӡ�����е�ÿһ��Ԫ��
void print_array(int* arr, int length)
{
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//swap two number
void Swap(int& a, int& b)
{
    int tmp = a; a = b; b = tmp;
}

//put max element to the end
void Bubble(int* arr, int length)
{
    for (int j = 1; j < length; ++j) {
        if (arr[j - 1] > arr[j]) { // swap if out of order [j-1] and [j]
            //(2) your code
            Swap(arr[j - 1], arr[j]);
        }
    }
}

void BubbleSort(int* arr, int n)
{
    for (int i = 0; i < n; ++i) { // i-th pass
        Bubble(arr, n - i);//put max element to the end
        print_array(arr, n);
    }
}

int main()
{
    int n = 8;
    int* arr = new int[n] {49, 38, 65, 97, 76, 13, 27, 49};//����8��int����,����ʼ��

    //ִ������
    BubbleSort(arr, 8);

    //�������������
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;//�ͷŶ�̬������Ҫ��delete[]
    return 0;
}