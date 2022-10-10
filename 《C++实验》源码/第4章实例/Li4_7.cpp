//程序Li4_7.cpp
//单继承机制下构造函数的调用顺序
#include <iostream>
using namespace std;
class Baseclass
{
	public:
        Baseclass(int i)// 基类的构造函数
	{
		 a=i;
         cout<<"constructing Baseclass a=" <<a<<endl;
	}
	private:
        int a;	
};
class Derivedclass:public Baseclass
{
    public:
        Derivedclass(int i,int j);
    private:
        int b;
};  
Derivedclass::Derivedclass(int i,int j):Baseclass(i)// 派生类的构造函数
{ 
	b=j;
    cout<<"constructing Derivedclass b="<<b<<endl;
}
int main()
{ 
    Derivedclass x(5,6);
	return 0;
}



