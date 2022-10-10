//³ÌĞòLi5_11.cpp
//ĞéÎö¹¹º¯Êı
#include <iostream>
using namespace std;
class Base
{
	public:
        Base( ){}
        virtual ~Base(){cout << "Base destructor is called."<<endl;}
};
class Subclass : public Base
{
	public:
        Subclass(){}
        ~Subclass();
};
Subclass::~Subclass()
{
	cout << "Subclass destructor is called."<<endl;
   
}
void main()
{
	Base *b=new Subclass;
	delete b;
}

