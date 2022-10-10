//程序Li3_1.cpp
//定义一个点类（Point），示例类体内实现成员函数
#include <iostream>
using namespace std;
class Point  
{
	public:
		void setxy(int,int)
		{
			X=x;
			Y=y;
		}
		void displayxy()
			{
				cout<<"The postion of point:";
				cout<<"("<<X<<","<<Y<<")"<<endl;
			}
	private:
		int X,Y; 
};
