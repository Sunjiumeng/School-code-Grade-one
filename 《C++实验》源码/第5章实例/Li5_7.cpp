//程序Li5_7.cpp
//虚函数说明没有影响它的基类中的函数
#include <iostream>
using namespace std;
class Base
{
	public:
		int func(int x)//不是虚函数
			{
			cout <<"This is Base class ";
            return x;
			}  
};
class Subclass1 :public Base
{
	public:
		virtual int func(int x)//虚函数
			{
			cout <<"This is Sub1 class ";
			return x;
           	}
};	
class Subclass2 :public Subclass1
{
	public:
		int func(int x)//自动成为虚函数
			{
			cout <<"This is Sub2 class ";
			return x;
           	}
};	
void main ( )
{
   Subclass2 sc2;
   Base& bc=sc2;
   cout<<"x= "<<bc.func(5)<<endl;
   Subclass1& sc1=sc2;
   cout<<"x= "<<sc1.func(5)<<endl;
}
