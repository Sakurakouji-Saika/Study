#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,n,number_of_times=0;
	cin >> x >> y;
	for(n=x;n<=y;n++)
	{
		if((n%4==0&&n%100!=0)||(n%4==0&&n%400==0)){
			number_of_times++;
		}
	}
	cout << number_of_times << endl;
	for(n=x;n<=y;n++)
	{
		if((n%4==0&&n%100!=0)||(n%4==0&&n%400==0)){
			cout << n << ' ';
		}
	}
	return 0;
}
