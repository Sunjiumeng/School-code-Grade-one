//例3_9.cpp
//体会this指针的显式使用
#include <iostream>
using namespace std;
class Point
{
	public:
		Point(int x,int y) {X=x;Y=y;} //有参构造函数
        Point(){X=0;Y=0;} //无参构造函数
        void copy(Point& obj);
        void displayxy();
	private:
		int X,Y;
};
void Point::copy(Point& obj)
{
   if (this!=&obj) // this指针的显式使用，避免无意义的更新
   *this=obj;
}
void Point::displayxy()
{ 
   cout<<X<<" ";
   cout<<Y<<endl;
}

int main()
{
   Point obj1(10,20), obj2;
   obj2.copy(obj1);          
   obj1.displayxy();
   obj2.displayxy();
   return 0;
}
