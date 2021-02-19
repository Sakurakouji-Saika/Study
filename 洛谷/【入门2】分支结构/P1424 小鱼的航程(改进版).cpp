#include<iostream>
using namespace std;
int main(){
	int n,m,sum=0;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		if(n!=6&&n!=7)
		{
			sum=sum+250;
		}
		if(n==7){
			n=1;
		} 
		else{
			n++;
		}
	}
	cout << sum << endl;
	return 0;
}
