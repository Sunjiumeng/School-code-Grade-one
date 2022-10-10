//程序Li2_6.cpp
//示例函数原型与带默认参数的函数的用法。
#include <iostream>
using  namespace std;
int sum(int ,int=9 );//计算两个整数和的函数原型 
int main()
{
	int a,b,sum1,sum2;
	cout<<"please input 2 integers to a,b"<<endl;
	cin>>a>>b;
	sum1=sum(a,b);//求a与b的和
    cout<<"a+b="<<sum1<<endl;//输出a与b的和
    sum2=sum(a);//求a与默认值的和
	cout<<"a+?="<<sum2<<endl;//输出a与默认值的和
	return 0;
}
int sum(int x,int y)//定义计算两个整数和的函数
{return x+y;} 