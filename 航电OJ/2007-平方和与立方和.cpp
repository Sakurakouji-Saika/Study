#include<iostream>
#include<math.h> 
using namespace std;
int main(){
	int begin_num,end_num; 
	while(cin >> begin_num >> end_num)
	{
		if(begin_num > end_num){
			int temp_num;
			temp_num = end_num;
			 end_num = begin_num;
			 begin_num = temp_num;
		}
		int square_num = 0;
		int cubic_num = 0;
		for(int i = begin_num;begin_num <= end_num;begin_num++){
			if(begin_num % 2 == 0){
				square_num += pow(begin_num,2);
			}
			else{
				cubic_num += pow(begin_num,3);
			}
		}
		cout << square_num << ' ' << cubic_num << endl; 
	}
} 


