//����Li7_7.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
template <typename AType,int size> class atype //ģ����
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
template < typename AType,int size> AType &atype<AType,size>::operator[] (int n)
{
    //�±�Խ����
    if(n< 0 || n>=size)
		{  cout<<"�±�"<<n<<"������Χ!"<<endl; 
	       exit(1);  
		}
	return array[n];   
}
int main()
{
	atype<int,10> intob;
    atype<double,10> doubleob;
    int i;
    cout << "Integer ���� : ";
    for(i=0;i<10;i++)intob[i]=i;
    for(i=0;i<10;i++)
		cout<<intob[i]<<"  ";
    cout<<endl;
    cout<<"Double ����: ";
    for(i=0;  i<10;  i++)  
		doubleob[i]=(double)i/2;
    for(i=0;  i<10;  i++)  
		cout<<doubleob[i]  <<"  ";
    cout<<endl;
    intob[12] = 100;  
    return 0;
}