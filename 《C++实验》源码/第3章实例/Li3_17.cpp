//程序Li3_15.cpp
//友元函数的使用。
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
	public:
		Point(double xi, double yi) {X=xi; Y=yi;}
		friend double length(Point &a,Point &b);
    private:
		int X, Y;
};

double length(Point &a, Point &b)
{
      double dx=a.X-b.X;
      double dy=a.Y-b.Y;
      return sqrt(dx*dx+dy*dy);
}

int main()
{  
	Point p1(3, 5), p2(4, 6);
    double d=length(p1, p2);
    cout<<"The distance is "<<d<<endl;
    return 0;
}
