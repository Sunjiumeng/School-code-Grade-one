//xt3_1.cpp
#include < iostream >
using namespace std;
class Circle
{
public:
   Circle(float r){ radius = r; }
   ~ Circle( ) {}
   float area() { return 3.14 * radius * radius; }
private:
   float radius;
};
int main( )
{
float r;
cout<< "请输入圆的半径：";
cin >> r;
Circle  p(r);
cout << "半径为"<< r << "的圆的面积为："<< p. area () << endl;
return 0;
}
