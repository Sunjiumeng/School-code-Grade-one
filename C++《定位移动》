#include<iostream>
using namespace std;
class A //创建父类 
{
	public:
    	A(int i,int j){a=i;b=j;} //含参，故无构造函数；
    	void move(int x,int y){a+=x;b+=y;}
    	void disp()
    	{
        	cout<<"("<<a<<","<<b<<")"<<endl;
   		}
	private:
    	int a,b;  //父类私有成员 
};
class B:public A //子类公有继承父类 
{
	public:
  		B(int i,int j,int k,int l):A(i,j),x(k),y(l){}
   		void disp()  //重写父类函数，实现子类的用法。 
   		{ cout<<x<<","<<y<<endl;}
   		void fun1(){ move(13,15);}
   		void fun2(){A::disp();} //子类定义成员函数 
	private:
   		int x,y;
};
int main()
{
   A aa(11,12);// 创建A类对象aa（i，j）=(11,12).  
   aa.disp();  //父类对象调用父类函数（a，b）=（11，12）.exe1
   B bb(13,14,15,16);//创建B类对象bb（i,j,k,l）=(13,14,15,16). 
   bb.fun1();//子类调用子类函数 move（13，15）.
   bb.A::disp();//子类调用父类函数（a，b）在A中的move（x，y）已改变 
   bb.B::disp();//(x,y)=(15,16)exe3
   bb.fun2();//同上bb.A::disp();
   return 0;
}
