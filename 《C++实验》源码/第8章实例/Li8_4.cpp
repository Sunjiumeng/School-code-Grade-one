//程序Li8_4.cpp
//示例如何使用控制符进行格式控制
#include <iostream>   
#include <iomanip>   
using namespace std;
int main()   
{
    double values[] = {1.23,35.36,653.7,4358.24};
    char *names[] = {"aaaaaaa", "bbbb", "ccccc", "dddddd"};
    for (int i=0;i<4;i++)
	{
		cout<<setiosflags(ios::left)
			<<setfill('*')<<setw(10)<< names[i];
         cout<<setprecision(5)<< values[i]<< endl;
    }
    return 0;

}