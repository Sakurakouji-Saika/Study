#include<iostream>
using namespace std;
int fib(int n);
int main()
{
	int n , answer;
	cout << "请输入一个数:";
	cin >> n;
	cout << endl;
	answer = fib(n);
	cout << answer  << n << endl;
	return  0; 
}
int fib(int n){
	if(n < 3 )
	{
		return 1; 
	}
	else
	{
		return (fib(n-2)+fib(n-1));
	}
}
