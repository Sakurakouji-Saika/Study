#include<iostream>
#include<math.h>
#include <iomanip>
#define pi 3.141593
using namespace std;
int main(){
	int k;
	cin >> k;
	switch(k){
		case 1:cout << "I love Luogu!";break;
		case 2:cout << "6 4";;break;
		case 3:cout << "3\n12\n2";break;
		case 4:cout<<fixed<<setprecision(3)<<1.0*500/3;break;
		case 5:cout<<(220+260)/(20+12);break;
		case 6:cout << sqrt(9*9+6*6);break;
		case 7:cout << "110\n90\n0";break;
		case 8:
		cout << 2*5*pi<<endl;
		cout << pi*5*5<<endl;
		cout <<(5*5*5*pi*4)/3;break;
		case 9:cout<<"22";break;
		case 10:cout<<'9'<<endl;break;
		case 11:cout<<100.0/(8-5)<<endl;break;
		case 12:cout<<"13"<<endl<<'R'<<endl;break;
		case 13:cout<<"16"<<endl;break;
		case 14:cout<<"50"<<endl;break;
	}
}
