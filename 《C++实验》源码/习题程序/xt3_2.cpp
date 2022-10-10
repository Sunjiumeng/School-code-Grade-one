//xt3_2.cpp
#include <iostream>  
using namespace std;
class  Book
{
	public:
		Book(int w);
		static int sumnum;
		static int getsum(){return sumnum;}
    private:
		int num;
};
Book::Book(int w)
{
	num=w;
	sumnum-=w;
}
int Book::sumnum=120;
int main()
{
	Book b1(20);
	Book b2(70);
	cout<<Book::getsum()<<endl;
	return 0;
}
