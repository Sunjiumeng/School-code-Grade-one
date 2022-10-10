//程序Li2_5.cpp
//通过调用两数和的函数，求3个数的和
#include <iostream>
using  namespace std;
int sum(int x,int y)//定义计算两个整数和的函数
{return x+y;} 
int main()
{
	int a,b,c,sum1,total;
	cout<<"please input 3 integers to a,b,c "<<endl;
	cin>>a>>b>>c;
	sum1=sum(a,b);//调用函数求两个整数的和
    total=sum(sum1,c);//调用函数求两个整数的和
    cout<<"a+b+c="<<total<<endl;//输出3个整数的和
	return 0;
}
