//程序Li2_9.cpp
//定义一个函数，返回两个数较大值的引用
#include <iostream>
using  namespace std;
int maxab;
int & maxRef(int x,int y) //函数的返回类型是引用
{
	if(x>y) maxab=x;
	else maxab=y;
     return maxab;
}

int main()
{
	int a,b;
    cout<<"Input a and b:";
    cin>>a>>b;
    cout<<maxRef(a,b)<<endl;
	return 0;
}
