#include <iostream>
using namespace std;
class TPoint
{
	
	public:
		TPoint(int x, int y){ X = x;Y=y;}
		TPoint(TPoint&p);
		~TPoint(){cout << "析构函数被调用：\n";} 
		int getx(){return X;}
		int gety(){return Y;}
	private:
		int X,Y;
 };
TPoint::TPoint(TPoint &p)
{
	cout << "构造函数被调用\n";
	X=p.X;
	Y=p.Y;
	cout << "拷贝构造函数被调用\n";
}
int main()
{
	TPoint p1(4,9);
	TPoint p2(p1);
	TPoint p3=p2;
	TPoint p4(0,0),p5(0,0);
	cout << "p3=("<<p3.getx() << ","<< p3.gety()<< ")\n";
	return 0;
}
