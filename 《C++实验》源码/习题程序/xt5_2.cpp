//xt5_2.cpp
#include <iostream>
#include <string>
using namespace std;
class Shape//定义抽象类Shape
{
	public: 
		Shape();//构造函数，记算图形序号
		void show();//输出面积
		virtual double area()=0; //纯虚函数，计算面积
        virtual string shapename()=0; //纯虚函数，得到显示图形的名称
	protected:
		string name;
		static int count; //记录图形序号
};
Shape::Shape()
{
	cout<<"请输入";
	count=count+1;
}
void Shape::show()
{
	 cout<<"第"<<count<<"个图形是"<<shapename();
     cout<<"，面积为"<<area()<<endl;
}
double total(Shape *s[],int n) //全局函数，计算所有图形的总面积
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=s[i]->area();
		delete s[i];
    }
	return sum;
}
class Triangle:public Shape//定义派生类Triangle
{
	public:
        Triangle();//构造函数，得到三角形的底和高
		double area(){return h*w*0.5;} //纯虚函数的具体实现，计算三角形的面积
        string shapename(){name="三角形";return name;}//得到三角形的名称
    protected:
		double h, w;
};
Triangle::Triangle()
{   
	double myw,myh;
	cout<<"三角形的底和高：";
	cin >>myw>>myh;
	w=myw;
	h=myh;
	}
class Rectangle:public Shape//定义派生类Rectangle 
{
	public:
		Rectangle();//构造函数，得到矩形的长和宽
		double area(){return l*w;} //纯虚函数的具体实现，计算矩形的面积
        string shapename(){name="矩形";return name;} //得到矩形的名称
    protected:
		double l, w;
};
Rectangle::Rectangle()
{
	double myl,myw;
	cout<<"矩形的长和宽：";
	cin>>myl>>myw;
	l=myl;w=myw;
}
class Circle:public Shape//定义派生类Circle
{
	public:
		Circle();//构造函数，得到圆的半径
        double area(){return radius*radius*3.14;}// 实现纯虚函数，计算圆的面积
        string shapename(){name="圆";return name;} //得到圆的名称
    protected:
		double radius;
};
Circle::Circle()
{
	double r;
	cout<<"圆的半径：";
	cin>>r;
	radius=r;}
int Shape::count=0;
int main()
{
	Shape *s[4];
    s[0]=new Triangle();
	s[0]->show();
    s[1]=new Rectangle();
    s[1]->show();
    s[2]=new Circle();
    s[2]->show();
	s[3]=new Circle();
	s[3]->show();
    double sum=total(s,4);
	cout<<"上述图形的面积和为：";
    cout<<sum<<endl;
	return 0;
}
