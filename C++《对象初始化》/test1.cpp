#include <iostream>
using namespace std;
class Point  
{
	public:
		void test1();
		Point(int);
		Point(int ,int );
		void displayxy();
		~Point();
    private:
		int X,Y; 
};
Point::Point (int x)
{
	test1();
	X=x;
	Y=x;
    cout<<"Constructor Constructor of a parameter is called!";
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
void Point::test1()
{
	cout<<"这个实例演示说明用参数创建普通对象p1和p2时，";
	cout<<"根据参数的情况自动调用相应的构造函数对对象进行初始化。"<<endl;
	cout<<"同时说明构造函数与析构函数的调用顺序。" <<endl; 
}
Point::~Point()
{
	cout<<"Destructor is called! ";
	displayxy();
}
