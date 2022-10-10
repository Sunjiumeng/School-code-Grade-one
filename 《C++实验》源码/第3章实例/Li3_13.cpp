//例3_10.cpp
//用静态数据成员控制点类
#include <iostream>  
using namespace std;
class Point	 
{
	public:
		int getresource(  );
		void freeresource(  )  {resource = 0;}
	private:
		static  int  resource;
 };
int Point::resource=0;  // 给静态成员赋初值0，表示点不可以被访问 
int Point::getresource( )
{
	if(resource)  return 0;  
	else 
	{
		resource=1;
		return 1;  
	}
}
int main( )
{
   Point obj1, obj2;
   if(obj1.getresource(  ))  
	   cout << "objl在访问点类资源"<<endl;
   if(!obj2.getresource()) 
	   cout << "obj2现在不可能访问点类资源"<<endl;
  obj1.freeresource() ;// objl完成访问点类资源
  if (obj2.getresource())
     cout << "obj2在访问点类资源 "<<endl;
  return 0;
}