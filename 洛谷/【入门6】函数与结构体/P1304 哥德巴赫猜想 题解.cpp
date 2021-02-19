#include<iostream>
using namespace std; 
int zhishu(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)return 1;
	}
	return 0;
}
int hdbg(int n)
{
	cout << n << '=';
	for(int i=2;i<n;i++)
	{
		if(zhishu(i)==0&&zhishu(n-i)==0)
		{
			cout << i << '+' << n-i <<endl;
			break;
		}
	 } 
}
int main(){
	int n;
	cin >> n;
	for(int i=4;i<=n;i+=2)
	{
		hdbg(i);
	}
	return 0;
}
