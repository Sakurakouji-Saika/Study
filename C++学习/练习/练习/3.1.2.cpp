#include<iostream>
#include<vector>
using namespace std;

void test01() {
    vector<int> arr{ 3,1,4,1,5,9,2,6 };

    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] > max)
        {
            //(1) your code 
            max = arr[i];
        }
    }

    cout << "max=" << max;

    
}

int mix(int a, int b)
{
    return a <= b ? a : b;
}


void test2() {
    vector<int> arr{ 3,1,4,1,5,9,2,6 };

    int result_max = arr[0];

    for (int i = 1; i < arr.size(); ++i)
    {
        result_max = mix(result_max, arr[i]);
    }

    cout << "mix=" << result_max;
}

int main()
{
    test2();
    return 0;
}