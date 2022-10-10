//xt2_1.cpp
#include <iostream> 
#include <cmath>  
using namespace std;
int main() 
{
    float x,y;
	cout<<"please input 2 floats to x,y:";
	cin>>x>>y;
	float z=pow(x,y);
    cout<<"pow("<<x<<","<<y<<")="<<z<<endl;
    return 0;
}
