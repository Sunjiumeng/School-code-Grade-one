//程序Li5_8.cpp
//成员函数中调用虚函数
#include <iostream>
using namespace std;
class Base
{
	public:
		virtual void  func1()//虚函数
			{
			cout <<"This is Base func1() "<<endl;
			}
		void func2(){func1();}
};
class Subclass :public Base
{
	public:
		 virtual void func1()//虚函数
			{
			cout <<"This is Subclass func1() "<<endl;
		    }   
};	

void main ( )
{
   Subclass  sc;
   sc.func2();
}
