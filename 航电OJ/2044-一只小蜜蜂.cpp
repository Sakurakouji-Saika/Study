/*
斐波那契数列
公式： 
F(n)=F(n - 1)+F(n - 2)
*/ 
#include<iostream> 
using namespace std;
int main(){
	long long  n[50] = {1,2,3};
	int k;
	cin >> k;
	while(k--){
		int a,b;
		cin >> a >> b;
		if(b-a > 3){
			for(int i = 3;i <= (b-a);i++){
				n[i] = n[i-1] + n[i-2];
			}
		}
		cout << n[b-a-1] << endl;
	}
}
