//程序清单Li1_2
//定义矩形类
#include <iostream>
using namespace std;
class RectangleArea
{
	
    public:
		void SetData(float L,float W);//输入长、宽值
        float CompueterArea();//计算面积
        void OutputArea();//输出面积
	private: 
		float length,width,area; //定义长、宽、面积
};
void RectangleArea::SetData(float L,float W)
{
	length=L;
	width=W;
}
float RectangleArea::CompueterArea()
{
    area=length*width;
	return area;
}
void RectangleArea::OutputArea()
{
	cout<<"area="<<area<<endl;
}
int main()
{
	RectangleArea Rectangl;//声明对象
	Rectangl.SetData(8,9);//
    Rectangl.CompueterArea();
    Rectangl.OutputArea();
	return 0;
}
