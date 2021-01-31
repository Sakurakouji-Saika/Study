#include<iostream>
#include<math.h>
#define PI 3.1415927
using namespace std;
int main(){
	double n,v,fs;
	while(scanf("%lf",&n) != EOF){
		getchar();
		printf("%.3lf\n",(4 * PI * pow(n * 1.0,3.0)) / 3);
	}
}
