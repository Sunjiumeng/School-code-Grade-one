//程序Li4_9.cpp
//多继承方式下构造函数的调用顺序
#include <iostream>
using namespace std;
class Base1//基类
{ 
    public:
        Base1(int i)// 基类构造函数
		{
		 a=i;
         cout<<"constructing Base1 a=" <<a<<endl;
		}
	private:
        int a;	 
};
class Base2//基类
{ 
    public:
        Base2(int i)// 基类构造函数
		{
		 b=i;
         cout<<"constructing Base2 b=" <<b<<endl;
		}
	private:
        int b;	 
};
class Derivedclass:public Base1,public Base2 //派生类
{
    public:
        Derivedclass(int i,int j,int k);
    private:
        int d;
};  
Derivedclass::Derivedclass(int i,int j,int k):Base2(i),Base1(j)
// 派生类的构造函数
{ 
    d=k;
    cout<<"constructing Derivedclass d="<<d<<endl;
}
int main()
{ 
    Derivedclass x(5,6,7);
	return 0;
}

