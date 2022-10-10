//Li9_6.cpp
//异常处理中的构造与析构
#include<iostream>
#include <string>
using namespace std;
void test(int) throw(int, char);//检测异常的函数
void handler(int i);//处理异常的函数
class Demo//定义一个用于演示的类
{
	public:
		Demo();
		~ Demo( );
		static k;
    private:
		int d;

};
Demo::Demo()
{
	k=k+1;
	d=k;
	cout<<"构造Demo,d="<<d<<endl;
}
Demo:: ~ Demo( )
{
	cout<<"析构 Demo,d="<<d<<endl;
}
int Demo::k=0;
int main()
{
	cout << "程序开始"<<endl;
    int i=1;
	handler(i);//调用处理异常的函数
	i=-1;
	handler(i);//调用处理异常的函数
	cout << "程序结束"<<endl;
	return 0;
}
void handler(int i)
{
	Demo D;
	try
	{
		test(i); //调用检测异常函数			
	}
	catch(int) //捕获int型异常
	{
		cout << "捕获一个int型异常."<<endl;
	}
	catch(char)//捕获char型异常
	{
		cout << "捕获一个char型异常."<<endl;
	}
}
void test(int i) throw(int, char)
{
	Demo D;
	if(i>0) throw i; 	// throw int
	if(i<0)  throw char(i); // throw char
}
