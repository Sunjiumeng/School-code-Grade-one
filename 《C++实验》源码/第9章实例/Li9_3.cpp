//Li9_3.cpp
//使用异常接口声明，进一步示例异常处理的执行过程
#include<iostream>
#include <string>
using namespace std;
void test(int) throw(int, char);//检测异常的函数，带有异常接口声明
void handler(int i);//处理异常的函数
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
	try
	{
		test(i); //调用检测异常函数			
	}
	catch(int) //捕获int型异常
	{
		cout << "捕获一个int型异常"<<endl;
	}
	catch(char)//捕获char型异常
	{
		cout << "捕获一个char型异常"<<endl;
	}
}
void test(int i) throw(int, char)
{
	if(i>0) throw i; 	// throw int
	if(i<0)  throw char(i); // throw char
	if(i==0) 
	{
		cout<<"抛出未给定类型的异常，程序将被终止!"<<endl;
		throw double(i);// throw double
    }
}