#include <iostream>
using namespace std;
int main() {
	int k,n;
	while(cin>>k){
	int x = 1;
		for(int i=0;i<k;i++){
			cin >> n;
			if(n % 2 != 0){
				x = x * n;
			}
		}
		cout << x << endl; 
	}
	return 0;
}
