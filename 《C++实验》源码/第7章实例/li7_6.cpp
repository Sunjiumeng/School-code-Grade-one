//程序Li7_6.cpp
//通用数组类
#include <iostream>
#include <cstdlib>
using namespace std;
const int size = 10;
template <typename AType> class atype //模板类
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
template <typename AType> AType &atype<AType>::operator[] (int n)
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
    atype<int> intob;  // integer 数组类，intob为该类的一个对象
    atype<double> doubleob;  // double 数组类，doubleob为该类的一个对象
    int i;
    cout << "Integer 数组: ";
    for(i=0;i<size;i++)intob[i]=i;
    for(i=0;i<size;i++)
		cout<<intob[i]<<"   ";
    cout<<endl;
    cout<<"Double 数组: ";
    for(i=0;  i<size;  i++)  
		doubleob[i]=(double)i/2;
    for(i=0;  i<size;  i++)  
		cout<<doubleob[i]  <<"   ";
    cout<<endl;
    intob[12] = 100;  // 下标越界
	return 0;
}