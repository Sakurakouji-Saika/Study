#include <iostream>
using namespace std;

bool is_prime_number(int n)
{
	//��С������Ϊ 2
	if (n < 2)
	{
		return false;//��������
	}

	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) //��������
		{
			//(1) your code  
			return false;

		}
	}
	//ǰ�涼û�з���false������£��Ż��ߵ������ʱ�Ѿ�ȷ��������Ϊ����
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