#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	int Chinese;
	int math;
	int English;
	int sum_grade;
}stu[1000];
bool cmp(Student a,Student b){
	return a.sum_grade>b.sum_grade;
}
int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n ;i++)
	{
		cin >> stu[i].name >> stu[i].Chinese >> stu[i].math >> stu[i].English;
		stu[i].sum_grade = stu[i].English + stu[i].Chinese + stu[i].math;
	}
	sort(stu,stu+n,cmp);
	cout<<stu[0].name<<" "<<stu[0].Chinese<<" "<<stu[0].math<<" "<<stu[0].English<<endl;
}
