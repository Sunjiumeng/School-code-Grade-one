#include <iostream>
using namespace std;
class Aa
{
	public:
		Aa(int i = 0)
		{	a = i;
			cout << "构造函数：" << a << endl;
		 }
		~Aa()
		{
			cout << "析构函数：" << a << endl;
		 }
		void print()
		{ cout << a << endl; } 
	private:
		int a;
 };
int main()
{
	Aa a1(1),a2(2);
	a1.print();
	//cout << a2.a << endl;
	a2.print();	
	return 0; 
 } 
