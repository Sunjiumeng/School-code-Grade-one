//程序Li5_6.cpp
//丢失虚特性
#include <iostream>
using namespace std;
class Base
{
	public:
		virtual int func(int x)//虚函数,形参为int型
			{
			cout <<"This is Base class ";
            return x;
			}  
};
class Subclass :public Base
{
	public:
		virtual int func(float x)//虚函数，形参为float型
			{
			cout <<"This is Sub class ";
			int y=float(x);
			return y;
           	}
};	
void test (Base& x)
{
	cout<<"x= "<<x.func(5)<<endl; 
}
void main ( )
{
   Base bc;
   Subclass sc;
   test (bc);
   test (sc);
}
