#include<iostream>
using namespace std;
int main(){
	int n;
	long long a[50] = {1,1};
	while(cin >> n){
		for(int i = 2;i <= n;i++){
			a[i] = a[i-1] + a[i-2];
		}
		cout << a[n] << endl;
	}
}
