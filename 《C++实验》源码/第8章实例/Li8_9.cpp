//Li8_9.cpp
//用二进制文件随机处理学生信息
#include<iostream>    
#include<fstream>    //文件流头文件
#include<string>
using namespace std;  
class student
{
	private:
		long num;
	    string  name;
		float score;
    public:
		void setnum() //输入学号
		{
			cin>>num;
		}
        void setname()        //输入姓名
		{
			cin>>name;
		}
       void setscore() //输入成绩
		{
			cin>>score;
		}
        long getnum()// 得到学号
		{
         return num;
		}
        string getname()//得到姓名
		{
         return name;
		}
        float getscore()//得到成绩
		{
         return score;
		}
};
int main()
{
	fstream file;
    file.open("student.dat",ios::in|ios::out|ios::binary);
	if(!file)
	{
		cout<<"File student.dat cannot be opened."<<endl;
		return 0;
    }
    student stud[100],s;
    cout<<"首先输入3个学生的信息:"<<endl;
	cout<<"学号\t姓名\t成绩"<<endl;
    for(int i=0;i<3;i++)
	{
		 stud[i].setnum();         //输入学号
         stud[i].setname();        //输入姓名
         stud[i].setscore();       //输入成绩
         file.write((char*)&stud[i],sizeof(student));
	}
    cout<<"再在第2个学生后插入两个学生的信息:"<<endl;
    cout<<"学号\t姓名\t成绩"<<endl;	
	file.seekp(sizeof(student)*2);
    for(i=3;i<5;i++)
	{
		 stud[i].setnum();          //输入学号
         stud[i].setname();         //输入姓名
         stud[i].setscore();        //输入成绩
         file.write((char*)&stud[i],sizeof(student));
	}
    cout<<"输出第2，4个学生的信息:"<<endl;
    cout<<"学号\t姓名\t成绩"<<endl;
	file.seekg(sizeof(student)*1);//读指针移到第2条记录
    file.read((char*)&s,sizeof(student));
    cout<<s.getnum()<<"\t";
    cout<<s.getname()<<"\t";
    cout<<s.getscore()<<endl;
    file.seekg(sizeof(student)*3);//读指针移到第4条记录
	file.read((char*)&s,sizeof(student));
    cout<<s.getnum()<<"\t";
    cout<<s.getname()<<"\t";
    cout<<s.getscore()<<endl;
    file.close();           //关闭文件
	return 0;
}