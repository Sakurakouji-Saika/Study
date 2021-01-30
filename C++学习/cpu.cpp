#include<iostream> 
using namespace std;
enum CPU_Rank{
	p1=1,p2,p3,p4,p5,p6,p7
}; 
class CPU{
	private:
		CPU_Rank rank;
		int frequency;
		float voltage;
	public:
		CPU(CPU_Rank r,int f,float v){
			rank = r;
			frequency = f;
			voltage =v;
			cout << "构造了一个CPU" << endl; 
		} 
		~CPU(){
			cout << "构造了一个CPU" << endl; 
		}
		CPU_Rank Getrank() const {return rank;}
		int Getfrequency() const {return frequency;}
		float Getvoltage() const {return voltage;}
		
		void Getrank(CPU_Rank r){
			rank = r;
		}
		void Getfrequency(int f){
			frequency = f;
		}
		void Getvoltage(float v){
			voltage = v;
		}
		void run(){
			cout << "CPU开始构造" << endl;
		}
		void stop(){
			cout << "CPU停止构造" << endl;
		}
};
int main(){
	CPU a(p6,300,2.8);
	a.run();
	a.stop();
	return 0;
}
