#include <iostream>
using namespace std;
class Baseclass
{
	public:
		void test5();
        Baseclass(int i)
		{
		test5();
		 a=i;
         cout<<"constructing Baseclass a=" <<a<<endl;
		}
		~Baseclass();
	private:
        int a;	
};
class Derivedclass:public Baseclass
{
    public:
        Derivedclass(int i,int j);
        ~Derivedclass();
    private:
        int b;
};  
Derivedclass::Derivedclass(int i,int j):Baseclass(i)
{ 
	b=j;
    cout<<"constructing Derivedclass b="<<b<<endl;
}
Derivedclass::~Derivedclass()
{
	cout<<"destructing Derivedclas "<<"b="<<Derivedclass::b<<endl;
}
Baseclass::~Baseclass()
{
	cout<<"destructing Baseclass "<<"b="<<Baseclass::a<<endl;
}
void Baseclass::test5()
{
	cout<<"这个实例演示说明,当说明派生类的一个对象时，首先调用基类的构造函数,对基类成员进行初始化，\n";
	cout<<"然后执行派生类的构造函数,对自已成员进行初始化，同时说明构造函数与析构函数的调用顺序。"<<endl;
}
