//程序Li4_16.cpp
//应用实例
#include<iostream>
using namespace std;
class Point                        //定义基类
{
    public:
        Point(int myx,int myy){x=myx;y=myy;}
        void displayxy()
		{
			cout<<"The postion of center:";
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
	protected:
        int x,y;//不能定义为私有成员，最好定义为保护成员
};
class Circle:public Point          //定义派生类，公有继承方式
{                       
    public:                                    
        Circle(int myx,int myy,int myr):Point(myx,myy)
		{r=myr;}
        void displayr(){cout<<"The radius of circle:"<<r<<endl;}
    private:
        int r;
};
class Cylinder:public Circle         //定义派生类，公有继承方式
{
    public:
    	Cylinder(int myx,int myy,int myr,int myh):Circle(myx,myy,myr)
		{h=myh;}
		void displayh(){cout<<"The height of cylinder :"<<h<<endl;}
    private:
    	int h;
};
int main()
{
     Cylinder  v(4,5,6,8);                // 派生类对象
	 cout<<"The data of cylinder:"<<endl;
	 v.displayxy();
	 v.displayr();
	 v.displayh();
	 return 0;
}
