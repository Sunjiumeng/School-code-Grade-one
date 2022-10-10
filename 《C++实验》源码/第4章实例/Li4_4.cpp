//程序Li4_4.cpp
//调用不同基类的相同成员时可能出现二义性
#include <iostream>
using namespace std;
class Baseclass1
{
    public:
        void seta(int x){a=x;}
	   void show(){cout<<"a="<<a<<endl;}
    private:
        int a;
};
class Baseclass2
{
    public:
        void setb(int x){b=x;}
	   void show(){cout<<"b="<<b<<endl;}
    private:
        int b;
};
class Derivedclass:public Baseclass1,public Baseclass2 
{
};
int main()
{
    Derivedclass obj;
    obj.seta(2);
    obj.show();//出现二义性，不能编译
    obj.setb(4);
    obj.show();//出现二义性，不能编译
	return 0;
}

