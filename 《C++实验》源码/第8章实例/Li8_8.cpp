//Li8_8.cpp
//用二进制文件处理学生信息
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
		void setnum() //输入学号num
		{
			cout<<"请输入学生的学号：";
            cin>>num;
		}
        void setname()        //输入姓名name
		{
			cout<<"请输入学生的姓名：";
            cin>>name;
		}
       void setscore() //输入学号成绩
		{
			cout<<"请输入学生的成绩：";
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
    ofstream outfile("student.dat",ios::binary);
	if(!outfile)
	{
		cout<<"File student.dat cannot be opened."<<endl;
		return 0;
    }
    student stud[100];
    char ch;
	int i=0;
    while(1)
    {
         cout<<"\n 你想输入更多记录吗(y/n)? ";
         cin>>ch;
         if(ch=='n'||ch=='N')
			 break;
       	 i=i+1;
		 stud[i].setnum();       //输入学号
         stud[i].setname();        //输入姓名
         stud[i].setscore();        //输入成绩
         outfile.write((char*)&stud[i],sizeof(student));
	}
    outfile.close();           //关闭文件
    cout<<"********输入结束********"<<endl;
    cout<<"\n 你想看文件内容吗(y/n)? ";
    cin>>ch;
    if(ch=='Y'||ch=='y')
	{
		ifstream infile("student.dat",ios::binary);
        if(!infile)
		{
		    cout<<"File student.dat cannot be opened."<<endl;
		    return 0;
		}
		cout<<"学号"<<"\t姓名"<<"\t成绩"<<endl;
		i=1;
		infile.read((char*)&stud[i],sizeof(student));
        while(infile)
		{
		     cout<<stud[i].getnum()<<"\t";
             cout<<stud[i].getname()<<"\t";
             cout<<stud[i].getscore()<<endl;
			 i=i+1;
			 infile.read((char*)&stud[i],sizeof(student));
		}
       infile.close();           //关闭文件
	}
  	return 0;
}