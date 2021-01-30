#include<iostream>
using namespace std;
double xncf(double x,int n)
{
	double val =1.0;
	while(n--)
	val =val*x;
	return val; 
 } 
 int main(){
 	double pow;
 	pow=xncf(5,2);
 	cout<<endl<<pow<<endl;
 	return 0;
 }
