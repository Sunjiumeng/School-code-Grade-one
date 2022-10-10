//xt7_1.cpp
#include <iostream>
#include <cmath>
using  namespace std;
template <typename T>
T kaifang(T a)
{
	T c;
	c=sqrt(a);
	return c;
}
int main( )
{
	int x=kaifang(4);
    cout<<"整数4的平方根为："<<x<<endl;
    double y=kaifang(1.96);	   
    cout<<"实数1.96的平方根为：" <<y<<endl;
    return 0;
}
