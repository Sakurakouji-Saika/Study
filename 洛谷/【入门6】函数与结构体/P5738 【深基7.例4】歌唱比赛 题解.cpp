#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >>  n >> m; 
	double res=-1;
	while(n--)
	{
		double temp=0,minnum=100,maxnum=-1,ans=0;
		for(int i=0;i<m;i++)
		{
			cin >> temp;
			ans += temp;
			minnum = min(temp,minnum);
			maxnum = max(temp,maxnum);
		}
		ans -= maxnum+minnum;
		ans /= m - 2.0;
		res = max (ans,res);
	}
	cout <<  fixed << setprecision(2) << res << endl;
	return 0;
} 
