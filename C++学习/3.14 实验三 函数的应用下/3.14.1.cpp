#include<iostream>
using namespace std;
int max1 (int a , int b){
	if(a>b){
		return a;
	}
	else if (a == b) {
		return a;
	}
	else {
		return b;
	}
}
int max1 (int a , int b , int c)
{
	return max1(max1(a,b),c);
}
int main(){
return 0;
}
