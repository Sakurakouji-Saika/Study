#include<iostream>
int sumoe(int a, int b){
	return a * a + b * b ;
}
double sumoe(double a,double b){
	return a * a + b * b;
}
int main(){
	int m=1,n=2;
	double x=3.4,y=5.67;
	std::cout<< sumoe(m,n) <<std::endl;
	std::cout<< sumoe(x,y) <<std::endl;
	
} 
