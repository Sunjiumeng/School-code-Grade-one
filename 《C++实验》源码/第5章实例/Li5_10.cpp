//程序Li5_10.cpp
//使用纯虚函数
#include <iostream>
const double PI=3.14;
using namespace std;
class Figure                       //定义基类
{    
    public:
        Figure(){};
		virtual double area() const =0;//定义为纯虚函数
};
class Circle : public Figure           //定义派生类，公有继承方式
{                       
    public:                                    
        Circle(double myr){R=myr;}
		virtual double area() const {return PI*R*R;}//定义为虚函数
	protected:
        double R;
};
class Rectangle : public Figure           //定义派生类，公有继承方式
{                       
    public:                                    
        Rectangle (double myl,double myw){L=myl;W=myw;}
		virtual double area() const {return L*W;}//定义为虚函数
	private:
        double L,W;
};
void func(Figure &p)//形参为基类的引用
{
	cout<<p.area()<<endl;
}
double main()
{
	Circle  c(3.0); // Circle派生类对象
    cout<<"Area of circle is ";
    func(c);
    Rectangle rec(4.0,5.0);// Rectangle派生类对象
	cout<<"Area of rectangle is ";
    func(rec);
	return 0;
}
