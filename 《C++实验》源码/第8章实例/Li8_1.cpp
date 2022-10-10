//程序Li8_1.cpp
//以几种不同的格式输出同一浮点数
//示例如何使用成员函数来操作标志字
#include <iostream>
using  namespace std;
int main( )
{
	double a=12.34;
	cout<<"a="<<a<<endl;
	cout.setf(ios::showpos);
    cout.setf(0x1000);
    cout<<"a="<<a<<endl;
	return 0;
}