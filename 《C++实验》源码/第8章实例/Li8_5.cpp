//程序Li8_5.cpp
//重载流的插入符和提取符。
#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(double r=0,double i=0);
    friend Complex operator + (Complex c1,Complex c2);//重载二元加
	friend Complex operator - (Complex c1,Complex c2);//重载二元减
    friend istream& operator>>(istream& s, Complex& c);
	friend ostream& operator<<(ostream& s, Complex& c);
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
istream& operator>>(istream& s,  Complex& c)
{
	s>>c.real>>c.imag;
	return s;
}
ostream& operator<<(ostream& s,  Complex& c)
{
	s<<'('<<c.real<<','<<c.imag<<')'<<endl; 
	return s;
}
int main()
{
    Complex c1,c2;
	cin>>c1>>c2;
    Complex c;
    cout<<"c1="<<c1;
    cout<<"c2="<<c2;
    c=c1+c2;     //c=operator+(c1,c2);
    cout<<"c1+c2="<<c;
    c=c1-c2;  //c=operator-(c1,c2);
    cout<<"c1-c2="<<c;
    return 0;
}
