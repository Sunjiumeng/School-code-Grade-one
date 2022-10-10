//程序Li2_12.cpp
//示例new和delete的用法
#include <iostream>
using  namespace std;
int main()
{
	int *p;  
	p=new int;
	*p=25;//也可在内存分配时,为其准备初值,如:p=new int(25)
	cout<<*p;
	delete p;
	return 0;
}
