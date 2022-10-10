//程序Li6_2.cpp
//友元函数重载运算符++和--
#include <iostream>
using namespace std;
class Counter
{
	public:
		Counter(){value=0;}
		Counter(int i){value=i;}
		friend Counter operator++(Counter&);      //前缀++运算符
        friend Counter operator++(Counter&,int);  //后缀++运算符
        friend Counter operator--(Counter&);      //前缀--运算符
        friend Counter operator--(Counter&,int);  //后缀--运算符
        void display(){cout<<value<<endl;}
    private:
        unsigned value;
};
Counter operator++(Counter& p)
{ 
	p.value++;
    return p;
}
Counter operator++(Counter& p,int)
{
	Counter temp;
    temp.value=p.value++;
    return temp; 
}
Counter operator--(Counter& p)
{
	p.value--;
    return p;
}
Counter operator--(Counter& p,int)
{
	Counter temp;
    temp.value=p.value--;
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
