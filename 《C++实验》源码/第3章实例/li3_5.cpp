//程序Li3_5.cpp
//示例构造函数的用法。
//点类的界面部分
#include <iostream>
using namespace std;
class Point  
{
	public:
		Point();//默认构造函数
	    Point(int);//有1个参数构造函数
		Point(int,int);//有2个参数构造函数
		void displayxy();
    private:
		int X,Y; 
};
//点类的实现部分
Point::Point ()
{
	X=7;
	Y=8;
    cout<<"Default constructor is called! ";
    displayxy();
}
Point::Point (int x)
{
	X=x;
	Y=8;
    cout<<"Constructor is called! ";
    displayxy();
}
Point::Point (int x,int y)
{
	X=x;
	Y=y;
    cout<<"Constructor is called! ";
    displayxy();
}
void Point::displayxy()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
int main()
{
    Point p1(3,4),p2[2]={5,6},p3;
    return 0;
}
