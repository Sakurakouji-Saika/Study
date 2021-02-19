#include<iostream>
#include<string>
using namespace std;
struct Student{
	int student_num;
	int result_a;
	int result_b;
	double sum_result;
	double temp_sum_result;
}stu[1000];
int main(){
	int k;
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> stu[i].student_num >> stu[i].result_a >> stu[i].result_b ;
		stu[i].sum_result = stu[i].result_a + stu[i].result_b ;
		stu[i].temp_sum_result = stu[i].result_a * 0.7 + stu[i].result_b * 0.3;
		
	}
	for(int i=0;i<k;i++){
		if(stu[i].temp_sum_result > 80 && stu[i].sum_result>140)
		{
			cout <<"Excellent" << endl;
		}
		else
		{
			cout <<"Not excellent" << endl;
		}
	}
}
