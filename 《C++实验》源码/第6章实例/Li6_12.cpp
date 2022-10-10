//程序Li6_12.cpp
//示例多个重载类类型转换运算符
#include <iostream>
using namespace std;
class Rr
{  
	public:
        Rr(int a);
        operator int();
		operator double();
    private:
		int data;
};
Rr::Rr(int a)
{
	data=a;
}
Rr::operator int()//第一个重载类类型转换运算符
{
	return data;
}
Rr::operator double()//第二个重载类类型转换运算符
{
	return double(data);
}

int main()
{
	Rr r1(2),r2(3);
	int x=int(r1)+int(r2);
	float y=double(r1)/double(r2);
	cout<<"x="<<x<<",y="<<y<<endl;
    return 0;
}
