//文件 Li3_4.cpp
//对象的声明和对成员的访问
#include <iostream>
#include "Li3_3.h"
using namespace std;
void Point::setxy(int x,int y)
{
	X=x;
	Y=y;
}
void Point::displayxy()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
using namespace std;
int main()
{
	Point p1,*p2;
	p1.setxy(3,4);
	cout<<"第一个点的位置是：";
    p1.displayxy();
	p2=&p1;
	p2->setxy(5,6);
	cout<<"第二个点的位置是：";
  	(*p2).displayxy();
	return 0;
}