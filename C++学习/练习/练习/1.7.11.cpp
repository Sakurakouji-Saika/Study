#include <iostream>
using namespace std;

bool is_prime_number(int n)
{
	//最小的素数为 2
	if (n < 2)
	{
		return false;//不是素数
	}

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) //不是素数
		{
			//(1) your code  
			return false;

		}
	}
	//前面都没有返回false的情况下，才会走到这里，此时已经确定该数字为素数
	return true;
}

void test(int n)
{
	bool is = is_prime_number(n);
	if (is)
	{
		cout << n << " is prime number." << endl;
	}
	else
	{
		cout << n << " is not prime number." << endl;
	}
}
int main()
{
	test(3);
	test(4);
	test(5);
	test(99);
	test(100);
	test(101);

	return 0;
}