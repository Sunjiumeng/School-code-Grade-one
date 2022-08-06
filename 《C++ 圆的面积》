 #include <iostream>
 using namespace std;
 const double PI=3.14;
 class Circle
 {
 	public:
 		Circle();
 		Circle(float radirus);
 		~Circle();
 		float area();
 	private:
 		float r;
 };
 Circle::Circle()
 {
 	cout << "默认无参构造被调用."<<endl;
 }
 Circle::Circle(float radirus)
 {
 	r=radirus;
 	cout << "有参构造函数被调用.圆半径" << r <<  endl; 
 }
 Circle::~Circle()
 {
 	cout<<"析构函数被调用"<<endl; 
 }
 float Circle::area()
 {
 	return PI*r*r;
 }
 int main()
 {
 	float r[2];
 	for(int i=0;i<2;i++)
 	{
 		cin>>r[i];	
	}
	 Circle test[2];
	 for(int i=0;i<2;i++)
	 {
	 	test[i]=r[i];
	 	cout << "area="<<test[i].area()<<endl;	
	 }
	 return 0;
}
