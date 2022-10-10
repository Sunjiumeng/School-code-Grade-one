//程序Li2_7.cpp
//示例值传递的方式交换两个对象的值。
#include <iostream>
using  namespace std;
void swap(int,int);
int main()
{
	int a=5,b=10;
	cout<<"before swaping"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	swap(a,b);
	cout<<"after swaping"<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}
void swap( int m,int n)
{
	int temp=m;
	m=n;
	n=temp;
}
