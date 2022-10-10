//程序Li7_3.cpp
//示例函数模板的重载
#include <iostream>
using  namespace std;
template <typename T>//第1个函数模板
T max(T a, T b)
{return a>b? a:b;}
template <typename T>//第2个函数模板
T max(T a[], int n)
{
	T temp;
	int i;
	temp=a[0];
	for(i=1;i<=n-1;i++)
		if (a[i]>temp)
			temp= a[i];
    return temp;
}
int main( )
{
	int a,b;
	cout << "Input two integers to a&b:"<<endl;
	cin >> a >> b;
	cout << "max(" << a << ","<< b << ") = "<< max(a,b) << endl;
	int i,aa[10]={3,7,9,11,0,6,7,5,4,2};
	cout<<"The original array: "<<endl;
	for (i=0;i<10;i++)
    cout<<aa[i]<<" ";
	cout<<endl; 
	cout<<"max of 10 integers is "<<max(aa, 10)<<endl;
	return 0;
}
	

