//程序Li7_2.cpp
//示例函数模板的使用
#include <iostream>
#include <string>
using  namespace std;
template <typename T>//函数模板
T max(T a, T b)
{return a>b? a:b;}
int main( )
{
	int a,b;
	cout << "Input two integers to a&b:"<<endl;
	cin >> a >> b;
	cout << "max(" << a << ","<< b << ") = "<< max(a,b) << endl;
	char c,d;
	cout << "Input two  chars to d&t: "<<endl;
	cin >> c >> d;
	cout << "max(" << "\'"<<c<< "\'" << "," << "\'"<< d << "\'"<< ") = "; 
	cout<<max(c,d) << endl;
	float x,y;
	cout << "Input two floats to   x&y: "<<endl;
	cin >> x >> y;
	cout << "max(" << x << "," << y << ") = " << max(x,y) << endl;
    cout << "Input two strings to  p&h: "<<endl;
	string  p,h;
	cin >> p >> h;
	cout << "max("<<"\""<< p << "\""<< "," << "\""<<h << "\""<<") = " ;
	cout<<max(p,h) << endl;
	return 0;
}