#include<iostream>
using namespace std;
enum ddr{
	ddr1=1,ddr2,ddr3,dd4
};
class RAM{
	private://Ë½ÓĞÀàĞÍ 
		int rl;
		ddr lx;
		int zp;
		public:
			Ram(ddr n,int g,int y){
				rl = n;
				lx = g;
				zp = y;
			}
			int Getrl() const {return rl}
			ddr Getlx() const {return lx}
			int Getzp() const {return zp}
			
			void Getrl(int rl){
				rl = n;
			}
};
