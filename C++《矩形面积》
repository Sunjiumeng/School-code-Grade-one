 #include <iostream>
 using namespace std;
 const double PI=3.14;
 class Rectangle
 {
 	public:
 		Rectangle(){} 
 		Rectangle(double x,double y){len=x;wid=y;}
		double perimeter(){ return 2*(len+wid);} 
		double area(){return len*wid;}
		void setValue(double m,double n) { len=m;wid=n;}
		double getLength(){return len; }
		double getWidth(){return wid; }
		void display();
	private:
		double len,wid;
  } ;
  void Rectangle::display(){
  	cout << "Length:"<< Rectangle::getLength()<<",";
  	cout << ",Width:"<<Rectangle::getWidth()<<endl;
  }
  int main()
  {
  	Rectangle r1(5,6),r2(0,0);
  	cout << "下面是矩形r1的信息："<< endl; 
  	r1.display();
  	cout << "perimeter:"<< r1.perimeter()<<",";
  	cout << "area:"<<r1.area()<<endl;
  	r2.setValue(3,4);
	cout << "下面是矩r2的信息："<<endl;
  	cout << "Length:"<< r2.getLength()<<",";
  	cout << ",Width:"<<r2.getWidth()<<endl;
	cout << "perimeter:"<< r2.perimeter()<<",";
  	cout << "area:"<<r2.area()<<endl;
	return 0;
  }
