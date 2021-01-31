#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int m, n;
	while (cin >> n >> m)
	{
		double number = n;
		double num = n;
		for (int i = 1; i < m; i++)
		{
			num = sqrt(num);
			number = number + num;
		}
		cout << fixed << setprecision(2) << number << endl;
	} 
	return 0;
}

