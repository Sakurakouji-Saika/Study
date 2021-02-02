#include<iostream>
using namespace std;
int main(){
	long long f[50] = { 3 , 8 };
	for(int i = 2 ; i < 50;i++){
		f[i] = 2 * f[i-1] + 2 * f[i-2];
	}
	int k;
	while(cin >> k){
		cout << f[k-1] << endl;
	}
} 
