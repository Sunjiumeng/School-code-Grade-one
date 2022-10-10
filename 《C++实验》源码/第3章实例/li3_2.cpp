//程序Li3_2.cpp
//定义一个点类（Point），示例类体外实现成员函数
//点类的界面部分
#include <iostream>
using namespace std;
class Point  
{
	public:
		void setxy(int,int);
		void displayxy();
    private:
		int X,Y; 
};
//点类的实现部分
void Point::setxy(int x,int y)
{
	X=x;
	Y=y;
}
void Point::displayxy()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
