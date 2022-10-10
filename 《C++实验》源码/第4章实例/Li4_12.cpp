//程序Li4_12.cpp
//基类有构造函数时，派生类构造函数的规则。
#include <iostream>
using namespace std;
class Baseclass
{ 
    public:
        Baseclass()//不能不定义
		{
            cout<<"default constructor Baseclass"<<endl;  
		}	 
        Baseclass(int i)//可以不要
		{
		    a=i;
             cout<<"constructing Baseclass a="<<a<<endl;
		}
	private:
        int a;	
};
class Derivedclass:public Baseclass
{
    private:
        int b;
};  
void main()
{ 
    Derivedclass x;
    
}   
class base1
{
     public:
		 base1( ) {cout<<"constructing base1"<<endl;}
};

class base2
{
      public:
		  base2( ){cout<<"constructing base2 "<<endl;}
};

class derived1:public base2, virtual public base1
{
     public:
		 derived1( ) {cout<<"constructing derived1"<<endl;}
};

class derived2:public base2, virtual public base1
{
     public:
		 derived2( ) {cout<<"constructing derived2"<<endl;}
};
class Derived3:public derived1, virtual public derived2
{
      public:
		  Derived3(){cout<<"constructing derived3"<<endl;}
};

int main()
{
      Derived3 obj;     
      return 0;
} 

