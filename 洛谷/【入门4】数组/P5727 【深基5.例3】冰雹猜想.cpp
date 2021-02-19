#include<iostream> 
using namespace std;
int a[10000];
int main(){
	int n,m,i=1;
	cin >> m;
	n=m;
	while(n!=1){
		if(n%2==0){
			n/=2;
		}
		else{
			n=n*3+1;
		}
		a[i]=n;
		i++;
	}
	for(int j=i-1;j>0;j--){
		cout << a[j] <<' ';
	}
	cout << m;
	return 0;
}
