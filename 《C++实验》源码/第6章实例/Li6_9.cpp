//ГЬађLi6_9.cpp
//жиди()
#include <iostream>
using namespace std;
class Func 
{
	private:
		double X,Y,Z;
	public:
		double GetX(){return X;}
 	    double GetY(){return Y;}
        double GetZ(){return Z;}
        double operator()(double x,double y,double z);
};
double Func::operator()(double x,double y,double z) 
//жиди()
{     
	X=x;
	Y=y;
	Z=z;
	return 5*x+6*y-7*z+8; 
}
int main()
{ 
	Func f;
    f(3.2,4.5,5.6);//f.operator()(3.2,4.5,5.6)
    cout<<"func(";
	cout<<f.GetX()<<","<<f.GetY()<<","<<f.GetZ()<<")=";
	cout<<f(3.2,4.5,5.6)<<endl;
    return 0; 
}




