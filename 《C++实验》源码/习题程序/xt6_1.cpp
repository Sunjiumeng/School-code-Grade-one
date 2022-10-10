#include<math.h>
#include<iostream.h>
#include <stdlib.h>
class  Fraction
{
	public:
		Fraction(int x=0,int y=1);  //声明带默认值的构造函数
		void  print();
		friend  Fraction operator+(Fraction&num1,Fraction&num2);//重载运算符"+"
		friend  Fraction operator-(Fraction&num1,Fraction&num2);//重载运算符"-"
		friend  Fraction operator*(Fraction&num1,Fraction&num2);//重载运算符"*"
		friend  Fraction operator/(Fraction&num1,Fraction&num2);//重载运算符"/"
	private:	
		int numerator,denominator;
		void optimization();
};
void Fraction::optimization()
{
	int gcd,min,max;
	if(denominator==0)//分母为0
		{
		cout<<"A zero denominator is invalid"<<endl; 
	    exit(1);
		}
	gcd=(abs(numerator)>abs(denominator)?abs(denominator):abs(numerator));
	if(gcd==0) return;
	//以下用辗转相除法求最大公约数
	if(abs(numerator)>abs(denominator))
		{
		max=numerator;
		min=denominator;
		}
	else
		{
		min=numerator;
		max=denominator;
		}
	do
	{
		gcd=max%min;
		max=min;
		min=gcd;
	}while(gcd!=0);
	numerator/=max;
	denominator/=max;
	if(denominator<0)
    {
		numerator=-numerator;
		denominator=-denominator;
	}
}
Fraction::Fraction(int x,int y)
{
	numerator=x;
    denominator=y;
    optimization();
}
void Fraction::print()
{
	if(denominator==1)//整数形式
		cout<<numerator<<endl;
	else if(numerator==0)//数值为零 
		cout<<numerator<<endl;
	else
		cout<<numerator<<"/"<<denominator<<endl;
}
Fraction operator+(Fraction&num1,Fraction&num2)
{
	Fraction temp;
    //分母为两个给出的分数的分母乘积
    //分子为第一个数的分子乘以第二个数的分母加上第一个数的分母乘以第二个数的分子
    temp.denominator=num1.denominator*num2.denominator; 
    temp.numerator=num1.numerator*num2.denominator+num1.denominator*num2.numerator; 
	temp.optimization();  
    return temp;
}
Fraction operator-(Fraction&num1,Fraction&num2)
{
	Fraction temp;
    //分母为两个给出的分数的分母乘积
	//分子为第一个数的分子乘以第二个数的分母减去第一个分的分母乘以第二个数的分子
	temp.denominator=num1.denominator*num2.denominator;                            
    temp.numerator=num1.numerator*num2.denominator-num1.denominator*num2.numerator; 
    temp.optimization(); 
	return temp;
}
Fraction operator*(Fraction&num1,Fraction&num2)
{
	Fraction temp;
    //分母为两个给出的分数的分母乘积
    //分子为两个给出的分数的分子乘积
    temp.denominator=num1.denominator*num2.denominator; 
    temp.numerator=num1.numerator*num2.numerator;  
    temp.optimization();
    return temp;
}
Fraction operator/(Fraction&num1,Fraction&num2)
{
	Fraction temp;
	//分母为第一个分数的分母乘以第二个分数的分子
	//分子为第一个分数的分子乘以第二个分数的分母
	temp.denominator=num1.denominator*num2.numerator; 
    temp.numerator=num1.numerator*num2.denominator; 
	temp.optimization();
	return temp;
}
int main()
{
	cout<<"下面是一组测试数据:"<<endl;
	Fraction r1(2,8),r2(23,45),r3,r4(-63,789),r5(3),r6(56,-894),r7(0,3),r8(-12,-48);
    cout<<"原始数据：  r1(2,8)"<<endl;
    cout<<"处理后数据：r1=",r1.print();
    cout<<"原始数据：  r2(23,45)"<<endl;
    cout<<"处理后数据：r2=",r2.print();
    cout<<"原始数据：  r3"<<endl;
    cout<<"处理后数据：r3=",r3.print();
    cout<<"原始数据：  r4(-63,789)"<<endl;
    cout<<"处理后数据：r4=",r4.print();
    cout<<"原始数据：  r5(3)"<<endl;
    cout<<"处理后数据：r5=",r5.print();
    cout<<"原始数据：  r6(56,-894)"<<endl;
    cout<<"处理后数据：r6=",r6.print();
    cout<<"原始数据：  r7(0,3)"<<endl;
    cout<<"处理后数据：r7=",r7.print();
    cout<<"原始数据：  r8(-12,-48)"<<endl;
    cout<<"处理后数据：r8=",r8.print();
    cout<<"下面是一组运算结果:"<<endl;
    r3=r1+r2;
    cout<<"r1+r2=";r3.print();
    r3=r1-r2;
    cout<<"r1-r2=";r3.print();
    r3=r1*r2;
    cout<<"r1*r2=";r3.print();
    r3=r1/r2;
    cout<<"r1/r2=";r3.print();
    return 0;
}
