//程序Li6_4.cpp
//友元函数重载运算符二元加、减
#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(double r=0,double i=0);
    friend Complex operator + (Complex c1,Complex c2);//重载二元加
	friend Complex operator - (Complex c1,Complex c2);//重载二元减
    void display();
private:
    double real,imag;
};
Complex ::Complex(double r,double i)
{
   real=r;imag=i;
}
Complex operator+(Complex c1, Complex c2)
{ 
  Complex temp;
  temp.real=c1.real + c2.real;
  temp.imag=c1.imag + c2.imag;
  return temp; 
}
Complex operator-(Complex c1, Complex c2)
{ 
  Complex temp;
  temp.real=c1.real - c2.real;
  temp.imag=c1.imag - c2.imag;
  return temp; 
}
void Complex::display() 
{  cout<<'('<<real<<','<<imag<<')'<<endl; }
int main()
{
    Complex c1(12.4,13.3),c2(14.4,26.5);
    Complex c;
    cout<<"c1=";
    c1.display();
    cout<<"c2=";
    c2.display();
    c=c1+c2;     //c=operator+(c1,c2);
    cout<<"c1+c2=";
    c.display();
    c=c1-c2;  //c=operator-(c1,c2);
    cout<<"c1-c2=";
    c.display();
    return 0;
}
