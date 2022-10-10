//程序Li4_13.cpp
//基类有构造函数时，派生类构造函数的规则。
#include <iostream>
using namespace std;
class Baseclass
{ 
    public:
        Baseclass()//缺省构造函数
		{
            cout<<"default constructor Baseclass"<<endl;  
		}	 
        Baseclass(int i)//有参构造函数
		{
		    a=i;
            cout<<"constructing Baseclass a="<<a<<endl;
	private:
        int a;	}
		
};
class Derivedclass:public Baseclass
{
    public:
        Derivedclass(int i);
		Derivedclass(int i,int j);
    private:
        int b;
};  
Derivedclass::Derivedclass(int i)//调用基类缺省构造函数
{ 
	b=i;
    cout<<"constructing Derivedclass b="<<b<<endl;
} 
Derivedclass::Derivedclass(int i,int j):Baseclass(i)//调用基类有参构造函数
{ 
	b=j;
    cout<<"constructing Derivedclass b="<<b<<endl;
}
int main()
{ 
    Derivedclass x1(5,6);
    Derivedclass x2(7);
	return 0;
}


