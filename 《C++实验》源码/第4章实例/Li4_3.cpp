//程序Li4_3.cpp
//了解多继承
#include <iostream>
using namespace std;
class Baseclass1
{
    public:
        void seta(int x){a=x;}
        void showa(){cout<<"a="<<a<<endl;}
    private:
        int a;
};
class Baseclass2
{
    public:
        void setb(int x){b=x;}
        void showb(){cout<<"b="<<b<<endl;}
    private:
        int b;
};
class Derivedclass:public Baseclass1,private Baseclass2 
{
    public:
        void setbc(int x,int y){setb(x); c=y;}
        void showbc(){showb();cout<<"c="<<c<<endl;}
    private:
        int c;
};
int main()
{
    Derivedclass obj;
    obj.seta(5);
    obj.showa(); 
    obj.setbc(7,9);
    obj.showbc();
	return 0;
}
