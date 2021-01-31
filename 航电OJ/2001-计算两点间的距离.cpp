#include<iostream> 
#include<math.h>
using namespace std;
int main()
{
	double x1,x2,y1,y2,d;
	while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) != EOF)
	{
		d = sqrt(pow((y2 - y1),2) + pow((x2 - x1),2));
		printf("%.2lf\n",d);
	}
	return 0;
}
