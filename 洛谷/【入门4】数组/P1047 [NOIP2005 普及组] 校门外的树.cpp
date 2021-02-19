#include<iostream>
using namespace std;
int a[10001],b[101],c[101];
int main(){
	int l,m,ans=0;
	cin >> l >> m;
	for(int i=0;i<m;i++)
	{
		cin>> b[i] >> c[i];
		for(int j=b[i];j<=c[i];j++){
			a[j]=1;
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]==0)ans++;
	}
	cout << ans << endl;
	return 0;
} 
