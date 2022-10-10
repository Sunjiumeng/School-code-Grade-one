//程序Li4_8.cpp
//包括子对象时，其构造函数的调用顺序
#include <iostream>
using namespace std;
class Base1//基类
{ 
    public:
        Base1(int i)
		{
		 a=i;
         cout<<"constructing Base1 a=" <<a<<endl;
		}
	private:
        int a;	 
};
class Base2//子对象f所属类
{ 
    public:
        Base2(int i)
		{
		 b=i;
         cout<<"constructing Base2 b=" <<b<<endl;
		}
	private:
        int b;	
};
class Base3//子对象g所属类
{ 
    public:
        Base3(int i)
		{
		 c=i;
         cout<<"constructing Base3 c=" <<c<<endl;
		}
	private:
        int c;	
};
class Derivedclass:public Base1//派生类
{
	public:
        Derivedclass(int i,int j,int k,int m);
    private:
        int d;
		Base2 f;
		Base3 g; 
  
};  
Derivedclass::Derivedclass(int i,int j,int k,int m):Base1(i),g(j),f(k)
{ 
    d=m;
    cout<<"constructing Derivedclass d="<<d<<endl;
}
int main()
{ 
    Derivedclass x(5,6,7,8);
	return 0;
}

