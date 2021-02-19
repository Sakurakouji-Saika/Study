#include<iostream>
using namespace std;
int prime_num(int n){
	if(n<=1)return 0;
	for(int i=2;i<n;i++)
	{
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(){
	int k,n;
	cin >> k;
	while(k--)
	{
		cin >> n;
		if(prime_num(n)) cout << n <<' ';
	}
}
