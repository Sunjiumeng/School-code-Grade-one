//程序Li4_14.cpp
//基类无缺省构造函数时，派生类构造函数的规则。
#include <iostream>
using namespace std;
class Baseclass
{ 
   public:
        Baseclass(int i)
		{
		    a=i;
            cout<<"constructing Baseclass a="<<a<<endl;
		}
	private:
        int a;	 
};
class Derivedclass:public Baseclass 
{
    public:
        Derivedclass(int i);
        Derivedclass(int i,int j);
    private:
        int b;
};  
Derivedclass::Derivedclass(int i) //错误，因没有显式调用基类构造函数
{ 
    b=i;
    cout<<"constructing Derivedclass b="<<b<<endl;
} 
Derivedclass::Derivedclass(int i,int j):Baseclass(i)
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



