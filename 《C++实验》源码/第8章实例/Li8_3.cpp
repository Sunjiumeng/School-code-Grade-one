//程序Li8_3.cpp
//示例如何使用ios类的成员函数设置域宽、充填字符及输出精度
#include <iostream>   
#include <string>   
using namespace std;
int main()   
{
    double values[] = {1.23,35.36,653.7,4358.24};
    char *names[] = {"aaaaaaa", "bbbb", "ccccc", "dddddd"};
	for (int i=0;i<4;i++)
	{
		cout.setf(ios::left);//设置左对齐
	    cout.fill('*');//充填字符为*
        cout.width(10);//设置域宽为10
	    cout.precision(5);//输出精度为5
        cout<<names[i]<<values[i]<< endl;
    }
	return 0;
}