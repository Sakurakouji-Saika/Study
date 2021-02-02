#include<iostream>
using namespace std;
void Length(int b)
{
	cout << "+";
	while(b--)
		cout << "-";
	cout << "+" << endl;
}
void Width(int b)
{
	cout << "|";
	while(b--)
		cout << " ";
	cout << "|" << endl;
}
int main()
{
	int n,m;
	while(cin >>n >> m)
	{
		Length(n);
		while(m--)
			Width(n);
		Length(n);
		cout<< endl;
	}
}
