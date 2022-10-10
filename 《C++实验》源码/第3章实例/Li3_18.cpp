//程序Li3_16.cpp
//友元类的使用。
#include <iostream>
#include <cmath>
using namespace std;
class student
{
	public:
		friend class teacher;//teacher是student的友元类
        student(){};
	private:
        int number,score;//学号,成绩
		 
};
class teacher
{
	public:
      teacher(int i,int j);
      void display();
    private:
		student a;
};
teacher::teacher(int i,int j)
{
    a.number=i;
	a.score=j;
}
void teacher::display()
{
    cout<<"No="<<a.number<<" ";
	cout<<"score="<<a.score<<endl;
}

int main()
{  
    student s;
	teacher t1(1001,89),t2(1002,78);
	cout<<"第一个学生的信息  ";
	t1.display();
    cout<<"第二个学生的信息  ";
	t2.display();
	return 0;
}
