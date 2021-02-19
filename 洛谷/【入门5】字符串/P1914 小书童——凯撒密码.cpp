#include<iostream>
#include<string>
using namespace std;
int main(){
	int k;
	string password;
	cin >> k;
	cin >> password;
	for(int i=0;i<password.size();i++)
	{
		for(int j=0;j<k;j++)
		{
			++password[i];
			if(password[i]>'z')
			password[i]='a';
		}
	}
	cout << password;
	return 0;
}
