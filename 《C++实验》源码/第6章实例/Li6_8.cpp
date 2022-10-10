//程序Li6_8.cpp
//重载下标运算符[ ]
#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT=100;
class  Intarray
{
	private:
         int size;// 数组大小
  	    int *array;// 数组名
    public:
		Intarray(int=1);// 默认为1个元素数组
         int& operator[](int n);
         ~Intarray();
};
Intarray::Intarray(int i)
{
	//数组越界检查
    if(i<0 || i>LIMIT)
		{  
		   cout<<" out of array limit"<<endl; 
	       exit(1);  
		}
	size=i;
	array=new int[size]; 
}
int& Intarray::operator[](int n)
{
	//下标越界检查
    if(n< 0 || n>=size)
		{  cout<<" out of range"<<endl; 
	       exit(1);  
		}
	return array[n];   
} 
Intarray::~Intarray()
{
	delete[] array;
	size=0;
}
int main()
{
    int k,num;
	cout<<"please input size of array(1～100):";
    cin>>k;
    Intarray array(k);
    for(int j=0; j<k; j++)       
    array[j]=j*10; 
	cout<<"please input number of output array(1～100):";
	cin>>num;
	for(j=0; j<num; j++)
	{          
        int temp = array[j];               
        cout<<"Element " <<"array["<<j <<"]" <<"  is  "<<temp<<endl;
	}
    return  0;
}




