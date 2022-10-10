//程序Li6_5.cpp
//程序中存在的问题
#include <iostream>
using namespace std;
class Namelist
{
	char *name;
    public:
        Namelist (int size)
		{
         name= new char[ size] ;
		}
        ~ Namelist ()
		{
         delete [] name ;
		}
};
int main()
{
	Namelist n1(10),n2(10);
	n2=n1;
	return 0;
}

