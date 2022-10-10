//程序Li6_6.cpp
//重载赋值运算符
#include <iostream>
using namespace std;
#include <cstring>
class Namelist
{
    char *name;
	public:
        Namelist (char *p)
		{
         name= new char[strlen(p)+1];
	     if (name!=0) strcpy(name,p);
		}
        ~ Namelist ()
		{
         delete [] name ;
		}
        Namelist& operator=(char *p );
	    Namelist& operator=( Namelist& );	
        void display(){cout<<name<<endl;}
};
Namelist& Namelist::operator=( char *p)//
//重载赋值运算符，完成用常量给对象赋值
{
    name= new char[strlen(p)+1];
	if (name!=0) strcpy(name,p);
    return *this;
}	
Namelist& Namelist::operator=( Namelist& a)
//重载赋值运算符，完成类对象之间的赋值
{
	if (this!=&a)
    {
		delete name;
		name=new char[strlen(a.name)+1];
		if (name!=0) strcpy(name,a.name);
	
	}
	return *this;
}	
int main()
{
	Namelist n1("right object"),n2("left object");
    cout<<"赋值前的数据："<<endl;
    n1.display();
	n2.display();
    cout<<"赋值后的数据："<<endl;
    n2=n1;
	n1.display();
	n2.display();
	return 0;
}


