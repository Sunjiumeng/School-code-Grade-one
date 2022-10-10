//程序Li5_2.cpp
//静态联编的问题
#include <iostream>
const double PI=3.14;
using namespace std;
class Figure                       //定义基类
{    
    public:
        Figure(){};
		double area() const {return 0.0;}
};
class Circle : public Figure           //定义派生类，公有继承方式
{                       
    public:                                    
        Circle(double myr){R=myr;}
		double area() const {return PI*R*R;}
	protected:
        double R;
};
class Rectangle : public Figure           //定义派生类，公有继承方式
{                       
    public:                                    
        Rectangle (double myl,double myw){L=myl;W=myw;}
		double area() const {return L*W;}
	private:
        double L,W;
};
void func(Figure &p)//形参为例基类的引用
{
	cout<<p.area()<<endl;
}
double main()
{
	Figure fig;//基类Figure对象
    cout<<"Area of  is Figure is ";
    func(fig);
	Circle  c(3.0); // Circle派生类对象
    cout<<"Area of circle is ";
    func(c);
    Rectangle rec(4.0,5.0);// Rectangle派生类对象
	cout<<"Area of rectangle is ";
    func(rec);
	return 0;
}
