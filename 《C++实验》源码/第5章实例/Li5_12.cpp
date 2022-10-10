//程序Li5_12.cpp
//虚析构函数的必要性
#include <iostream>
using namespace std;
class Base
{
	public:
        Base( ){}
        ~Base(){cout << "Base destructor is called."<<endl;}
};
class Subclass : public Base
{
	public:
        Subclass(); 
        ~Subclass();
private:
     int * ptr;
};
Subclass::Subclass()
{ 
	ptr=new int; 
}
Subclass::~Subclass()
{
	cout << "Subclass destructor is called."<<endl;
    delete ptr;
}
void main()
{
	Base *b=new Subclass;
	delete b;
}

