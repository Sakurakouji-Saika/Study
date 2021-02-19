#include<iostream> 
using namespace std;
int main(){
	int k;
	cin >> k;
	for(int i = 2;i <=k;i++)
	{
		if(k % i == 0){
			cout << k/i << endl;
			break;
		}
	}
	return 0;
}
