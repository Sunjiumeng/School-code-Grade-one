//Li9_2.cpp
//示例使用异常处理来处理错误
#include < iostream >
using namespace std;
int dive(int x,int y);
#include < iostream >
using namespace std;
int dive(int x,int y);//自定义除法函数
int main( )
{
	try//检测异常
	{
		cout<<"5/2 ="<<dive(5,2)<<endl;
        cout<<"8/0 ="<<dive(8,0)<<endl;
        cout<<"7/1 ="<<dive(7,1)<<endl;
	}
    catch (int)//捕获异常
    {
           cout<<"Except of deviding zero. "<<endl;
	}
    cout <<"End of program."<<endl;
	return 0;
}
int dive(int x, int y)
{
	if(y==0)//分母为0
		throw y;//抛出异常
    return x/y;
}
