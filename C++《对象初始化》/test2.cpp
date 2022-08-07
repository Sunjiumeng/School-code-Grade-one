#include<iostream> 
using namespace std;
class TPoint
{
  public:
  	void test2();
  	TPoint();
    TPoint(int x,int y){X=x; Y=y;}
    TPoint(TPoint &p);
	int getx(){return X;}
    int gety(){return Y;} 
  private:
    int X,Y;
};
void TPoint::test2()
{
	cout<<"这个实例演示说明,当用类的一个对象去创建该类的另一个对象时，";
	cout<<"自动调用拷贝构造函数对对象进行初始化。"<<endl;
	cout<<"首先用参数创建对象p1"<<endl;
	cout<<"Constructor is called!"<<endl;
}
TPoint::TPoint(TPoint &p)
{
  X=p.X;
  Y=p.Y;
  cout<<"Copy-initialization Constructor is called\n";
}
