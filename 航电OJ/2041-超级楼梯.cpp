/* Fibonacci sequence */
#include<iostream>
using namespace std;
int main(){
	long long f[50]={0,1};
	int k; //Ñ­»·´ÎÊý;
	cin >> k;
	while(k--){
		int x;
		cin >> x;
		for(int i = 2 ; i <= x + 1 ; i++){
			f[i] = f[i-1] + f[i-2];
		}
		cout << f[x] << endl;
	} 
}
