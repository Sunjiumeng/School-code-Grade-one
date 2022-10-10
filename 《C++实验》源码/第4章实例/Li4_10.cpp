//程序Li4_10.cpp
//有虚基类时，多继承方式下构造函数的调用顺序。
#include <iostream>
using namespace std;
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

