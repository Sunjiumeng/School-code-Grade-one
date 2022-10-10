//程序Li6_1.cpp
//成员函数重载运算符++和--
#include <iostream>
using namespace std;
class Counter
{  
	public:
		Counter(){value=0;}
		Counter(int i){value=i;}
        Counter operator++();     //前缀++运算符
        Counter operator++(int);  //后缀++运算符
        Counter operator--();     //前缀--运算符
        Counter operator--(int);  //后缀--运算符
        void display(){cout<<value<<endl;}
    private:
		unsigned value;
};
Counter Counter::operator++()
{
	value++;
    return *this;
}
Counter Counter::operator++(int)
{
	Counter temp;
    temp.value=value++;
    return temp; 
}
Counter Counter::operator--()
{ 
	value--;
    return *this;
}
Counter Counter::operator--(int)
{
    Counter temp;
    temp.value=value--;
    return temp; 
}
int main()
{
	Counter n(10),c;
    c=++n;
    cout<<"前缀++运算符计算结果："<<endl;
    cout<<"n= ",n.display();
	cout<<"c= ",c.display();
	c=n++; 
	cout<<"后缀++运算符计算结果："<<endl;
    cout<<"n= ",n.display();  
	cout<<"c= ",c.display();
    c=--n;
    cout<<"前缀--运算符计算结果："<<endl;
	cout<<"n= ",n.display();
	cout<<"c= ",c.display();
	c=n--; 
	cout<<"后缀--运算符计算结果："<<endl;
    cout<<"n= ",n.display();
	cout<<"c= ",c.display();
    return 0;
}
