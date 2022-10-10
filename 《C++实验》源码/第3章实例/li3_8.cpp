//例3_8.cpp
//体会this指针的隐式使用
#include <iostream>
using namespace std;
class Point
{
	public:
		Point(int=0, int=0 );
		void displayxy();
    private:
		int X,Y;
};
Point::Point(int x,int y)
{
	X=x;
	Y=y;
}
void Point::displayxy()
{
	cout<<X<<endl;//相当于cout<< this->X<<endl;
	cout<<Y<<endl;//相当于cout<< this->Y<<endl;
}

int main()
{
   Point obj1(10,20), obj2(8,9),*p;
   p=&obj1;       //p指向对象obj1           
   p->displayxy();
   p=&obj2;      //p指向对象obj2
   p->displayxy();
   return 0;
}
