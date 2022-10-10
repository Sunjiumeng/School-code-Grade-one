//程序Li2_3.cpp
//体会指针的值、地址与指针所指向的对象的值、地址的含义
#include <iostream>
using namespace std;
int main()
{
	int icount=36;
	int * pointer=&icount;
	*pointer=95;
	cout<<icount<<endl;
	cout<<pointer<<endl;
	cout<<&icount<<endl;      //与pointer值相同
	cout<<* pointer<<endl;   //与icount值相同
	cout<<&pointer<<endl;    //指针本身的地址
	return 0;
}
