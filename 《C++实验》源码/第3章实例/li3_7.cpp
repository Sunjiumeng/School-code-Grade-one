//程序Li3_7.cpp
//了解拷贝构造函数的用法
//点类的界面部分
#include <iostream>
using namespace std;
class Point  
{
	public:
		Point(int=0,int=0);
		Point (const Point&);
		void displayxy();	
		~Point();
    private:
		int X,Y; 
};
//点类的实现部分
Point::Point (int x,int y)
{
	X=x;
	Y=y;
    cout<<"Constructor is called! ";
    displayxy();
}
Point::Point(const Point& p)
{
	X=p.X;
	Y=p.Y; 
	cout<<"Copy constructor is called! ";
    displayxy();
}
Point::~Point()
{
	cout<<"Destructor is called! ";
	displayxy();
}
void Point::displayxy()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
Point func( Point p)
{
	int x=10*2;
	int y=10*2; 
	Point pp(x,y);
	return pp;
}
int main()
{
    Point p1(3,4);
    Point p2=p1;//用类的一个对象去初始化该类的另一个对象时。
	p2=func(p1);//函数的形参是类的对象,且函数的返回值是类的对象
   	return 0;
}

