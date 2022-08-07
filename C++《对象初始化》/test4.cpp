#include <iostream>
using namespace std;
class Heapclass
{  
   public:
   	void test4();
	   Heapclass(int x); 
	   Heapclass(); 
	   ~Heapclass();
   private:
	   int i;
};
Heapclass::Heapclass(int x) 
{
	test4();
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
void Heapclass::test4()
{
	cout<<"这个实例演示说明,当便用new创建堆对象时，构造函数被执行,以便初始化所创建的对象;\n";
	cout<<"当使用delete删除堆对象时,析构函数被执行。"<<endl; 
}
