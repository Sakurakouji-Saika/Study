#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,ans=0;
	for(i=0;i<10;i++)
	{
		cin >> a[i];
	}
	cin >> n;
	for(i=0;i<10;i++)
	{
		if((n+30)>=a[i])
		{
			ans++;
		}
	} 
	cout << ans << endl;
	return 0; 
}
