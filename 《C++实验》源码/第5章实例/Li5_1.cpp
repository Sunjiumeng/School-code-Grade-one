//程序Li5_1.cpp
//静态联编的含义
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
int main()
{
     Figure fig;//基类Figure对象
	 double area;
	 area=Fig.area();
	 cout<<"Area of  is figure is "<<area<<endl;
     Circle  c(3.0); // 派生类Circle对象
	 area=c.area(); 
     cout<<"Area of circle is "<<area<<endl;
	 Rectangle rec(4.0,5.0);// 派生类Rectangle对象
     area=rec.area(); 
	 cout<<"Area of rectangle is "<<area<<endl;
     return 0;
}
