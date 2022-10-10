//程序Li3_6.cpp
//示例析构函数的用法。
//点类的界面部分
#include <iostream>
using namespace std;
class Point  
{
	public:
		Point(int,int);
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
void Point::displayxy()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
Point::~Point()
{
	cout<<"Destructor is called! ";
	displayxy();
}
int main()
{
    Point p1(3,4),p2(5,6);
   	return 0;
}