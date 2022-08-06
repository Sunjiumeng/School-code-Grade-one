#include <iostream>
using namespace std;
class Book    //定义Book类
{
	private:
		double weight;
	public:
		void Book()
		{
			double bw;
			cout << "请输入书的重量：";
			cin >> bw;
			weight = bw;
		}
		friend double tWeight(Book& b);
};
class Ruler    //定义Ruler类
{
	private:
		double weight;
	public:
		Ruler()
		{
			double tw;
			cout << "请输入尺子的重量：";
			cin >> tw;
			weight = tw;
		}
		friend double tWeight(Ruler& r);
};
///*分别定义Book和Ruler的友元函数*/
double tWeight(Book& b)
{
	return b.weight;
}
double tWeight(Ruler& r)
{
	return r.weight;
}
int main()
{
	Book b;
	Ruler r;
	cout << "书和尺子的总重量：" << tWeight(b) + tWeight(r) << endl;
	return 0;
}
