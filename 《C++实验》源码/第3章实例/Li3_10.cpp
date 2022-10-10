//程序Li3_10.cpp
//子对象的初始化
#include <iostream>
using namespace std;
class Part
{
    public:
        Part();          //Part的无参构造函数
        Part (int x);  // Part的有参构造函数
        ~Part();        //Part的析构函数
    private:
        int val;};
Part::Part()
{
	val=0;
    cout<<"Default constructor of Part"<<endl;
}
Part::Part(int x)
{   
	val=x;
    cout<<"Constructor of Part"<<","<<val<<endl;
}
Part::~Part()
{
	cout<<"Destructor of Part"<<","<<val<<endl;
}
class Whole
{
    public:
        Whole(int i);  // Whole的有参构造函数
        Whole(){};     //Whole的无参构造函数
        ~Whole();      //Whole的析构函数
        private:
        Part p1;  //子对象
        Part p2; //子对象
};
Whole::Whole(int i):p1(),p2(i)
{
	cout<<"Constructor of Whole"<<endl;
}
Whole::~Whole()
{
	cout<<"Destructor of Whole"<<endl;
}
int main()
{   Whole w(3);//调用有参构造函数
    return 0;
}




