#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,a=0,b=0,c=0,d=0;
	cin >> x;
	if(x % 2 == 0 && x > 4 && x <= 12) a=1;
	if(x % 2 == 0 || x > 4 && x <= 12) b=1;
	if(!(x % 2 == 0) && x > 4 && x <= 12) c=1;
	if(!(x % 2 == 0) && !(x > 4 && x <= 12)) d=1;
	cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	return 0;
}
