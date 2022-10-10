//Li9_1.cpp
//示例不使用异常处理来处理错误
#include < iostream >
using namespace std;
int dive(int x,int y);//自定义除法函数
int main( )
{
	cout<<"5/2 ="<<dive(5,2)<<endl;
    cout<<"8/0 ="<<dive(8,0)<<endl;
    cout<<"7/1 ="<<dive(7,1)<<endl;
	cout<<"End of program."<<endl;
	return 0;
}
int dive(int x,int y)
{
	if(y==0)//分母为0
    {
		cout <<"Except of deviding zero."<<endl ; 
		exit(1);//退出程序
    }
	else
	    return x/y;
}
