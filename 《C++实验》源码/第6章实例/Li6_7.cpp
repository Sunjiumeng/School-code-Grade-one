//程序Li6_7.cpp
//比较运算符重载函数与拷贝构造函数的区别
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
        Namelist(){ };
		Namelist(Namelist&);
        Namelist& operator=(char *p );
	    Namelist& operator=(  Namelist& );	
        void display(){cout<<name<<endl;}
		~ Namelist ()
		{
         delete [] name ;
		}
};
Namelist::Namelist(Namelist& a)//定义拷贝构造函数
{
    name= new char[strlen(a.name)+1];
	if (name!=0) strcpy(name,a.name);
}
Namelist& Namelist::operator=( char *p)//
//第一个重载赋值运算符，完成用常量给对象赋值
{
    name= new char[strlen(p)+1];
	if (name!=0) strcpy(name,p);
    return *this;
}	
Namelist& Namelist::operator=(  Namelist& a)
//第二个重载赋值运算符，完成类对象之间的赋值
{
	if (this!=&a)
    {
		delete[] name;
		name=new char[strlen(a.name)+1];
		if (name!=0) strcpy(name,a.name);
	}
	return *this;
}	
int main()
{
	Namelist n1("first object"),n2("second object"),n3;
    cout<<"赋值前的数据："<<endl;
	n1.display();
	n2.display();
    n3="third object";//调用第一个重载赋值运算符函数
    n2=n1;//调用第二个重载赋值运算符函数
	Namelist n4(n2);//调用拷贝构造函数函数
	cout<<"赋值后的数据："<<endl;
	n1.display();
	n2.display();
	n3.display();
	n4.display();
	return 0;
}



