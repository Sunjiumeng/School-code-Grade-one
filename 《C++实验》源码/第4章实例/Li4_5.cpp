//程序Li4_5.cpp
//访问共同基类的成员时可能出现二义性
#include <iostream>
using namespace std;
class Base
{
	protected:
		int val;
};		
class Baseclass1:public Base
{
    public:
        void seta(int x){val=x;}
};
class Baseclass2:public Base
{
    public:
        void setb(int x){val=x;}
};
class Derivedclass:public Baseclass1,public Baseclass2 
{
    public:
		void show(){cout<<"val="<<val;}//含义不清，不能编译
};
int main()
{
	Derivedclass obj;
	obj.seta(2);
    obj.show(); 
    obj.setb(4);
    obj.show(); 
	return 0;
}


