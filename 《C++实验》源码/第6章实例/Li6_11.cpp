//先定义一个分数类Rtype，数据成员是分子data1和分母data2，
//要求重载类类型转换运算符，把分数类Rtype对象转换成double型数据。
//程序Li6_11.cpp
//示例重载类类型转换运算符
#include <iostream>
using namespace std;
class Rtype
{  
	public:
        Rtype(int a,int b=1);//只有一个非默认参数的构造函数
		operator double();
    private:
		int data1,data2;
};
Rtype::Rtype(int a,int b)
{
	data1=a;
	data2=b;
}
Rtype::operator double()//重载类类型转换运算符
{
	return double(data1)/double(data2);
}

int main()
{
	Rtype r1(2,4),r2(3,8);
	cout<<"r1="<<r1<<",r2="<<r2<<endl;
    return 0;
}
