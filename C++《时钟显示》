#include <iostream>
using namespace std;
class Clock
{
	public:
		void set_time(int H,int M,int S);
		void show_time();
	private:
		int h,m,s;
};
void Clock::set_time(int H,int M,int S)
{
	h=H;
	m=M;
	s=S;
}
void Clock::show_time()
{
	cout << h <<":"<<m<< ":"<<s;
}
int main()
{
	Clock time;
	int H,M,S;
	cin >>H>>M>>S; 
	time.set_time(H,M,S);
	time.show_time();
	return 0;
}
