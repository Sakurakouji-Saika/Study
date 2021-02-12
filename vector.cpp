#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> obj={11,32,24,67,99,55,50};
	cout << "元素个数："<<obj.size() << endl;;
	sort(obj.begin(),obj.end());
	cout << endl << "------------直接输出------------" << endl << endl;
	for(int i=0;i<obj.size();i++){
		cout <<obj[i] << " ";
	}
	cout << endl << "------------用迭代器------------" << endl << endl;
	vector<int>::iterator it;
	for(it=obj.begin();it!=obj.end();it++){
		cout << *it << " ";
	} 
	cout << endl << "------------反转元素------------" << endl << endl;
	reverse(obj.begin(),obj.end());
	for(int i=0;i<obj.size();i++){
		cout << obj[i] <<" ";
	}
	cout << endl << "------------清除元素------------" << endl << endl;
	obj.clear();//清除容器中所以数据
	for(int i=0;i<obj.size();i++)
	{
        cout<<obj[i]<<endl;
    }
    cout << "元素个数："<<obj.size();
    cout << endl << "------------顺序元素------------" << endl << endl;
    for(int i=0;i<0;i++)
    {
    	obj.push_back(i);
	}
	for(it=obj.begin();it!=obj.end();it++)
	{
		
	}
}




//bool moe(int a , int b){
//	return a<b;
//}
//int main(){
//	vector <int> obj;
//	for(int i=0;i<10;i++)
//	{
//		obj.push_back(i);
//		cout << obj[i]   << ",";
//	}
//	for(int i=0;i<5;i++)
//	{
//		obj.pop_back();
//	}
//	cout << endl;
//	cout << obj.size();
//	cout << endl;
//	for(int i=0;i<obj.size();i++)
//	{
//		cout << obj[i]<< ",";
//	}
//	cout << endl;
//	
////	obj.clear();
////    for(int i=0;i<obj.size();i++)
////	{
////        cout<<obj[i]<<endl;
////    }
//	reverse(obj.begin(),obj.end());
//	cout <<"---------------------倒叙--------------------"<<endl; 
//	for(int i=0;i<obj.size();i++)
//    {
//        cout<<obj[i]<<",";
//    }
//    cout << endl;
//    cout <<"---------------------排序--------------------"<<endl; 
//    sort(obj.begin(),obj.end(),moe); 
//    	for(int i=0;i<obj.size();i++)
//    {
//        cout<<obj[i]<<",";
//    }
//    cout <<endl<<"---------------------迭代--------------------"<<endl; 
//    vector <int>::iterator it;
//    for(it=obj.begin();it!=obj.end();it++)
//    {
//    	cout << *it << " ";
//	}
//	return 0;
//}
