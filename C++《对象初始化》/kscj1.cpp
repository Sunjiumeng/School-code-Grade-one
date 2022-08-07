#include <iostream>
#include "test1.cpp"
#include "test2.cpp"
#include "test3.cpp"
#include "test4.cpp"
#include "test5.cpp"
#include "kscj1.h"   
using namespace std;
void selectmenu()
{
	cout<<"********* 对象初始化演示实例********\n"<<endl;
	cout<<"        1.普通对象初始化实例1"<<endl;
	cout<<"        2.普通对象初始化实例2"<<endl;
	cout<<"        3.子对象初始化实例"<<endl;
	cout<<"        4.堆对象初始化实例"<<endl;
	cout<<"        5.派生类对象初始化实例"<<endl;
	cout<<"        6.退出程序"<<endl;	
}
void handlemenu(int a)
{
	switch(a)
	{
		case 1:
		{
			Point p1(3),p2(5,6);
		 } break;
		case 2:
		{
			TPoint p1(4,9);p1.test2();
  			cout <<"p1 = ( "<<p1.getx( )<<","<<p1.gety()<<")\n"; 
  			TPoint p2(p1); 
  			cout <<"p2 = ( "<<p2.getx( )<<","<<p2.gety()<<")\n"; 
  			TPoint p3=p2;
  			cout <<"p3 = ( "<<p3.getx( )<<","<<p3.gety()<<")\n"; 
		}break;
		case 3:
		{
			Whole w(3);
		}break;
		case 4:
		{
			Heapclass *pa1,*pa2;
			pa1=new Heapclass(4);
			pa2=new Heapclass;
			if (!pa1||!pa2)
			{
			cout<<"Out of Memory!"<<endl;
			}	
			cout<<"Exit main"<<endl;
			delete pa1;
			delete pa2;
		}break;
		case 5:
		{
			Derivedclass x(5,6);
		}break;
		case 6: break;
		default:cout<<"You enter a eorrow number!\n"; 
	}
}
int main()
{
while(1)
	{
	selectmenu();
	int a;
	cout<<"\n请输入对应的模块1-6："<<endl;
	cin>> a;
	if(a!=6){
	handlemenu(a);
	}else{
		cout<<"EXIT!"<<endl;break;
	}
	}
	return 0;	
}
