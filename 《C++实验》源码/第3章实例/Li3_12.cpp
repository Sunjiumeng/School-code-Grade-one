//程序Li3_12.cpp
//运算符new[ ]和delete[ ]的用法
#include <iostream>
using namespace std;
class Heapclass
{
   int i;
   public:
   Heapclass(); 
   ~Heapclass();
};
Heapclass::Heapclass() 
{
	cout<<"Default Constructor called."<<endl;
}
Heapclass::~Heapclass() 
{
	cout<<"Destructor called."<<endl;
}

int main()
{
	Heapclass *ptr;
	ptr=new Heapclass[2];//分配空间
	if (!ptr)//检查空间
	{
		cout<<"Out of Memory!"<<endl;
		return ;
	}	
	cout<<"Exit main"<<endl;
	delete[ ]ptr; 
	return 0;
}
