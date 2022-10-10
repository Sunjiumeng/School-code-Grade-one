//Li9_5.cpp
//示例异常的逐层传递。
#include<iostream>
#include<string>
using namespace std;
string e="exception";
void func( )
{
	try
        { throw e; }//引发string类型的异常
    catch (string msg )//捕获异常并作处理
		{
            cout<<"func: catch "<<msg<<endl;
		    cout<<"      throw "<<msg<<"  to main"<<endl;
            throw;//将捕获异常再传递给上一层
		 }
     return;
}
int main( )
{ 
	try
         { func(); }//检测异常
    catch(string msg )//捕获异常并作处理
         { cout<<"main: catch "<<msg<<" from func"<<endl; }
	return 0;
}
	 