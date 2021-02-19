#include<iostream>
using namespace std;
int rev_num(int n)
{
	int b=0;
	while(n)
	{
		b=b*10+n%10;
		n=n/10;
	}
	return b;
}
int zs(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0){
			return 1;
			break;
		}
	}
	return 0;
}
int main(){
	int a,b;
	cin >> a >> b;
	for(int i=a;i<=b;i++)
	{
		if(i==9989900) //如果到了这个数，就break 
			break;
		if(i==rev_num(i)&&zs(i)==0)
		{
		cout << i << endl;	
		}
	}
}
