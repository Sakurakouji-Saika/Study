#include<bits/stdc++.h>
using namespace std;
int jiecheng(int n){
	long long  s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
int main(){
	long long k,sum=0;
	cin >> k;
	for(int i=1;i<=k;i++){
		long long t=jiecheng(i);
		sum+=t;
	}
	cout << sum;
	return 0;
}
