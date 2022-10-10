//程序Li4_11.cpp
//基类没有构造函数时，派生类构造函数的规则
#include <iostream>
using namespace std;
class Baseclass
{ 
   private:
       int a;
};
class Derivedclass:public Baseclass
{
    public:
        Derivedclass();//派生类缺省构造函数
        Derivedclass(int i); //派生类有参构造函数
    private:
       int b; 
};  
Derivedclass::Derivedclass()
{
    cout<<"default constructor Derivedclass"<<endl;  
}	 
Derivedclass::Derivedclass(int i)
{ 
    b=i;
    cout<<"constructing Derivedclass b="<<b<<endl;
}
int main()
{ 
    Derivedclass x1(5);
    Derivedclass x2;
	return 0;
}

