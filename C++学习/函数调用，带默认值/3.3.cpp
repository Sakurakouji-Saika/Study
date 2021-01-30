#include<iostream>
#include<iomanip>
using namespace std;
int gerVolume(int length,int width =2,int height =3);
int main(){
	const int X=10,Y=12,Z=15;
	cout <<  gerVolume(X,Y,Z)<<endl;
	cout <<  gerVolume(X,Y)<<endl;
	cout << gerVolume(X)<<endl;
	return 0; 
}
int gerVolume(int length,int width,int height){
	cout <<setw(5)<<length<<setw(8)<<width<<setw(5)<<height << '\t';
	return length* width * height; 
	 
}
