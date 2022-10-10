//程序Li3_16.cpp
//静态成员函数的使用。
#include <iostream>
using namespace std;
class Point  
{
	public:
		Point(int=0,int=0);
       	static void displayxy( Point p);
	private:
		int X,Y; 
};
Point::Point (int x,int y)
{
	X=x;
	Y=y;
}

void Point::displayxy( Point p)
{
	cout<<"("<<p.X<<","<<p.Y<<")"<<endl;//引用非静态数据成员
}
//主函数：
int main()
{
  Point A(4,5);	//第一个对象
  cout<<"第一个点的位置是：";
  Point::displayxy(A); 
  Point B(7,8); 	//第二个对象
  cout<<"第二个点的位置是：";
  Point::displayxy(B);
  return 0;
}



