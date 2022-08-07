#include <iostream>
using namespace std;
class Part
{
    public:
    	void test3();
        Part();          
        Part (int x);  
        ~Part();        
    private:
        int val;
};
Part::Part()
{
	val=0;
	test3();
    cout<<"Default constructor of Part"<<endl;
}
Part::Part(int x)
{   
	val=x;
    cout<<"Constructor of Part"<<","<<val<<endl;
}
void Part::test3()
{
	cout<<"这个实例演示说明,子对象的初始化是通过调用这些对象成员所在类的构造函数来完成的，\n";
	cout<<"同时说明构造函数与析构函数的调用顺序。"<<endl;
}
Part::~Part()
{
	cout<<"Destructor of Part"<<","<<val<<endl;
}
class Whole
{
    public:
        Whole(int i); 
        Whole(){};     
        ~Whole();      
        private:
        Part p1;  
        Part p2;
};
Whole::Whole(int i):p1(),p2(i)
{
	cout<<"Constructor of Whole"<<endl;
}
Whole::~Whole()
{
	cout<<"Destructor of Whole"<<endl;
}
