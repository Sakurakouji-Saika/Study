#include<iostream>
using namespace std;
int s[10];
int main(){
	int x,y;
	while(cin >> x >> y){
		if( x==0 && y==0){
			break;
		}
		x *= 100;
		for(int i=x;i<x+99;i++){
			if(i%y==0){
				printf("%02d ",i % 100);
			}
		}
		cout << endl;
	}
}
