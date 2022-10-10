//xt8_1.cpp
#include <iostream.h>
class Fraction
{
    public:
		Fraction(int x=0,int y=1);
		friend ostream& operator<<(ostream&,Fraction&);
	private:
        int den;    //·Ö×Ó
        int num;    //·ÖÄ¸
};
Fraction::Fraction(int x,int y)
{
	den=x;
	num=y;
}
ostream& operator<<(ostream& os,Fraction& fr)
{
    os<<fr.den<<'/'<<fr.num;
    return os;
}
int main()
{
	Fraction fenshu(2,3);
    cout<<"fenshu= "<<fenshu<<endl;
	return 0;
}
