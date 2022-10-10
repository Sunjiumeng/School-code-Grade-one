//程序Li4_1.cpp
//公有继承方式、单继承的例子
#include <iostream>
using namespace std;
class Point                       //定义基类
{    
    public:
        void setxy(int myx,int myy){X=myx;Y=myy;}
		void movexy(int x,int y){X+=x;Y+=y;}
    protected:
        int X,Y;
};
class Circle : public  Point         //定义派生类，公有继承方式
{                       
    public:                                    
        void setr(int myx,int myy,int myr)
		{setxy(myx,myy);R=myr;}	
        void display();
	protected:
        int R;
};
void Circle::display()
{
    cout<<"The postion of center is ";
	cout<<"("<<X<<","<<Y<<")"<<endl;
	cout<<"The radius of Circle is "<<R<<endl;
}
int main()
{
     Circle  c; // 派生类对象
	 c.setr(4,5,6);
	 cout<<"The start data of Circle:"<<endl;
	 c.display();
	 c.movexy(7,8);
     cout<<"The new data of Circle:"<<endl;
	 c.display();
	 return 0;
}
