//程序Li7_8.cpp
//使用默认参数的类模板
#include <iostream>
#include <cstdlib>
using namespace std;
template <typename AType=int,int size=10> class atype //使用默认参数的模板类
{
    
	public:
		atype() 
		{
			int i;
			for(i=0;i<size;i++)array[i]=i;
		}
		AType &operator[] (int n);
    private:
        AType array[size];
};
template <typename AType,int size> AType &atype<AType,size>::operator[] (int n)
{
    //下标越界检查
    if(n< 0 || n>=size)
		{  cout<<"下标"<<n<<"超出范围!"<<endl; 
	       exit(1);  
		}
	return array[n];   
}
int main()
{
    // 12个元素的integer数组类，intob为该类的一个对象
	atype<int,12> intob;
	//double数组类，数组大小为默认值10，doubleob为该类的一个对象
    atype<double> doubleob;
	//数组类，类型为默认值int，数组大小为默认值10，defaultob为该类的一个对象
    atype<> defaultob;
    int i;
    cout << "Integer 数组 : ";
    for(i=0;i<12;i++)intob[i]=i;
    for(i=0;i<12;i++)
		cout<<intob[i]<<"  ";
    cout<<endl;
    cout<<"Double 数组: ";
    for(i=0;  i<10;  i++)  
		doubleob[i]=(double)i/2;
    for(i=0;  i<10;  i++)  
		cout<<doubleob[i]  <<"  ";
    cout<<endl;
    cout<<"默认参数数组: ";
    for(i=0;i<10;i++)
		cout<<defaultob[i]<<"  ";
    cout<<endl;
    return 0;
}