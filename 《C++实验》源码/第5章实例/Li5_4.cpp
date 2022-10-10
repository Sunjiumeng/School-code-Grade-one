//程序Li5_4.cpp
//继承虚属性
#include <iostream>
using namespace std;
class Base
{
	public:
		virtual int func(int x)//虚函数
			{
			cout <<"This is Base class ";
            return x;
			}  
};
class Subclass :public Base
{
	public:
		int func(int x)//实为虚函数
			{
			cout <<"This is Sub class ";
			return x;
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
