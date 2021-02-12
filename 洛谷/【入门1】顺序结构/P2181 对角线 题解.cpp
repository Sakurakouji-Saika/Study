//对角线拥有的点公式： （n*(n-1)*(n-2)*(n-3)/24
//防止数据溢出，就化简为(n*(n-1)/2*(n-2)/3*(n-3)/4)
#include<iostream>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    cout<<(n*(n-1)/2*(n-2)/3*(n-3)/4)<<endl;
    return 0;
}
