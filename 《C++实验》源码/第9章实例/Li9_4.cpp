//Li9_4.cpp
//自定义异常类的示范程序
#include <iostream>
#include <string>
using  namespace  std;
class Negativenumber //定义异常类1
{
public:
       Negativenumber();
Negativenumber(string s);
       string getmessage();
private:
       string message ;
};
Negativenumber::Negativenumber( ){ }
Negativenumber::Negativenumber(string s)
{  message=s; }
string Negativenumber::getmessage()
{return  message;}
class Dividebyzero{};     //定义异常类2
void test() throw(Negativenumber,Dividebyzero);//检测异常的函数，带异常接口声明
void handler();//处理异常的函数
int main()
{
	handler();
	cout<<"End of program."<<endl;
    return 0;
}
void test() throw(Negativenumber,Dividebyzero)
{
	double totalmoney,averprice; 
	int booknumber;
	cout<<"Enter total money of your books: ";
    cin>>totalmoney;
    if (totalmoney<0)
	throw Negativenumber ("total money");
    cout<<"Enter book number:";
    cin>>booknumber;
    if(booknumber<0)
	    throw Negativenumber ("book number");
	if(booknumber!=0) averprice=totalmoney/booknumber;
	else throw Dividebyzero();
    cout<<"Average price of all books is:  "<<averprice<<endl;
}
void handler()
{
	try
	{
        test();//调用检测异常函数
    }
	catch(Negativenumber e)//捕获类型为异常类1的异常并作处理
		{cout<<e.getmessage()<<" cannot be a negative. "<<endl;}
    catch(Dividebyzero)//捕获类型为异常类2的异常并作处理
		{ cout<<"The number of book  is zero,error!!!"<<endl;}
}	