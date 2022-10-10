//程序Li9_8.cpp
//应用实例
#include<iostream>
#include<new>
using namespace std;
class Heapclass
{
	public:
		Heapclass(int x); 
        Heapclass(); 
        ~Heapclass();
    private:
        int i;
};
Heapclass::Heapclass(int x) 
{
	i=x;
	cout<<"Constructor called."<<i<<endl;
}
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
	Heapclass *pa1,*pa2;
	try//检测异常
	{
	pa1=new Heapclass(4);//分配空间
	pa2=new Heapclass;//分配空间
	if (!pa1||!pa2)//检查空间
		throw bad_alloc();//抛出异常 
	}
	catch(bad_alloc e)//捕捉异常  
	{
         cout<<e.what()<<endl;
         return 0;
    }
	cout<<"Exit main"<<endl;
	delete pa1;
	delete pa2;
	return 0;
}

