//程序Li4_6.cpp
//基类子对象
#include <iostream>
using namespace std;
class Base
{
    protected:
		int val;
};		
class Baseclass1:public Base
{
    public:
        void seta(int x){val=x;}
};
class Baseclass2:public Base
{
    public:
        void setb(int x){val=x;}
};
class Derivedclass:public Baseclass1,public Baseclass2 
{
    public:
		void show()
		{
			cout<<"val of path Baseclass1="<<Baseclass1::val<<endl;
              cout<<"val of path Baseclass2="<<Baseclass2::val<<endl;
		} 
};
int main()
{
    Derivedclass obj;
    obj.seta(2);
    obj.setb(4);
    obj.show(); 
	return 0;
}


