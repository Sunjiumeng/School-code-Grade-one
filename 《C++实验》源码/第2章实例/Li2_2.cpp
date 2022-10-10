//程序Li2_2.cpp
//计算两个整数的和，两个实数的差
#include <iostream>
using  namespace std;
int main()
{
	int a,b,sum;
	cout<<"please input 2 integers to a,b "<<endl;
	cin>>a>>b;
	sum=a+b;//计算两个整数的和
	float c,d,sub;
	cout<<"please input 2 floats to c,d"<<endl;
    cin>>c>>d;
	sub=c-d;//计算两个实数的差
    cout<<"a+b="<<sum<<endl;//输出两个整数的和
    cout<<"c-d="<<sub<<endl;
	return 0;
}