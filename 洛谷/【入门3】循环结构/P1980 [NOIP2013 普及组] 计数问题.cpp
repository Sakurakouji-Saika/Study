#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,x,c;
	cin >> n >> x;
	for(int i=0;i<=n;i++){
		int a = i;
		while(a!=0)
		{
			int b =a % 10;
			a = a / 10;
			if(b==x)c++;
		}
	}
	cout << c << endl;
	return 0;
}
