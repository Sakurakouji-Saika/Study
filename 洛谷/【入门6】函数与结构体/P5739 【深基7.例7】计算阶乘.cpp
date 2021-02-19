#include<bits/stdc++.h>
using namespace std;
int digui(int k){
	if(k==0)return 1;
	k*=digui(k-1);
}
int main(){
	int n;
	cin >> n;
	cout << digui(n)<< endl;
	return 0;
}
