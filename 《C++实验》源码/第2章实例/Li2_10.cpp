//程序Li2_10.cpp
//引用返回函数
#include <iostream>
using  namespace std;
int a[]={1,6,11,12};
int &index(int i);

int main()
{
   cout<<index(3)<<endl;    // 输出12
   index(3)=10;              //将a[3]改为10
   cout<<index(3)<<endl;   // 输出10
   return 0;
}
int& index(int i)
{  
	return a[i]; 
}
