//xt9_1.cpp
#include <iostream>
#include <cmath>
using  namespace  std;
class Cln
{
	public:
		Cln(double x);
        double get_y();
    private:
        double y;
};
double main()
{
	double  x,y,z;
    try
    {
		cout<< "Enter a double number:";
        cin>>x;
	    y=2*x+1;
        if(y<0)
			throw Cln(y);
		    z=log(y);
		    cout<<"y=ln("<<2*x+1<<")="<<z<<endl;
    }
    catch(Cln e)
    {
		cout<<e.get_y()<<": 负数求对数"<<endl;
    }
     cout<<"End of program."<<endl;
     return 0;
 }
Cln::Cln(double x): y(x)
{}
double Cln::get_y()
{
     return y;
}
	 