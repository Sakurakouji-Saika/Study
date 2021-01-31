#include<iostream>
#include<math.h> 
using namespace std;
int main(){
	double a;
	while(scanf("%lf",&a) != EOF){
		a = abs(a);
		printf("%.2lf\n",a);
	}
	return 0;
}
