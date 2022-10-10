//程序Li8_2.cpp
//以几种不同的进制输出同一整数
//示例ios定义的公有静态符号常量的作用
#include <iostream>
using  namespace std;
int main( )
{
	double a=12;
	cout.setf(ios::showbase);
	cout<<"以十进制输出12为:";
	cout.setf(ios::dec,ios::basefield);
    cout<<12<<endl;
	cout<<"以八进制输出12为:";
	cout.setf(ios::oct,ios::basefield);
    cout<<12<<endl;
	cout<<"以十六进制输出12为:";
	cout.setf(ios::hex,ios::basefield);
    cout<<12<<endl;
	return 0;
}