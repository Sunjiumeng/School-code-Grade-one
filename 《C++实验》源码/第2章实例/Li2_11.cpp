//程序Li2_11.cpp
//示例内联函数与重载函数的用法。
#include <iostream>
using  namespace std;
inline void print(int a)//内联函数，形参为int
{
	cout<<a<<endl;
}
int sum(int x,int y);//两个形参
int sum(int x,int y,int z);//3个形参
void print(double a);//普通函数，形参为double
int main()
{
    int x1,x2;
	double y=8.6;
	x1=sum(3,4);
	cout<<"3+4=";
    print(x1);
	x2=sum(3,4,5);
    cout<<"3+4+5=";
    print(x2);
    cout<<"1 double is ";
	print(y) ;
	return 0;
} 
void print(double a)
{
	cout<<a<<endl;
}
int sum(int x,int y)//定义计算两个整数和的函数
{
	return x+y;
} 
int sum(int x,int y,int z)//定义计算3个整数和的函数
{
	return x+y+z;
} 