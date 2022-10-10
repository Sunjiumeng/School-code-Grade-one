//程序Li4_15.cpp
//派生类析构函数的调用顺序。
#include <iostream>
using namespace std;
class Base1//基类
{ 
    public:
        Base1(int i)//基类构造函数
		{
		    a=i;
            cout<<"constructing Base1 a=" <<a<<endl;
		}
		~ Base1()//基类析构函数
		{
		    cout<<"destructing Base1"<<endl;
		}
    private:
        int a;
};
class Base2//子对象f所属类
{ 
   public:
        Base2(int i)//构造函数
		{
			b=i;
            cout<<"constructing Base2 b=" <<b<<endl;
		}
		~Base2()//析构函数
		{
            cout<<"destructing Base2"<<endl;
		}
    private:
        int b;		
};
class Base3//子对象g所属类
{ 
    public:
        Base3(int i)//构造函数
		{
			c=i;
            cout<<"constructing Base3 c=" <<c<<endl;
		}
		~Base3()//析构函数
		{
		    cout<<"destructing Base3"<<endl;
		}
    private:
        int c;
};
class Derivedclass:public Base1//派生类
{
    public:
        Derivedclass(int i,int j,int k,int m);
        ~Derivedclass();
    private:
        int d;
		Base2 f;
		Base3 g; 
};  
Derivedclass::Derivedclass(int i,int j,int k,int m):Base1(i),g(j),f(k)
//派生类构造函数
{ 
	d=m;
    cout<<"constructing Derivedclass d="<<d<<endl;
}
Derivedclass::~Derivedclass()//派生类析构函数
{
    cout<<"destructing Derivedclass"<<endl;
}

int main()
{ 
    Derivedclass x(5,6,7,8);
	return 0;
}



