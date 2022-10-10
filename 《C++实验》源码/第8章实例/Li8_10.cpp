//Li8_10.cpp
//应用实例
#include<iostream>
#include<fstream>
#include <string>
#include <iomanip>
using namespace std;
static int n=0;
class Mytel
{
	public:
		void getdata()
		{
			cin>>name>>telno;
		}
		void disp()
		{
			cout<<name<<setw(12)<<telno<<endl;
		}
	    string getname()
		{
		    return name;
		}
	private:
	    char name[12];
	    char telno[12];
};
void func1()
{
	ofstream output("phone.dat",ios::binary);
    if (!output)
	{
		cout<<"File cannot be opened．"<<endl;
		return ;
    }
	Mytel s;	
	cout<<"输入朋友人数:";
	cin>>n;
	cout<<"姓名"<<setw(8)<<"电话"<<endl;
	for(int i=0;i<n;i++)
	{
		s.getdata();
		output.write((char *)&s,sizeof(s));
	}
	output.close();
}
void func2()
{
	ifstream input("phone.dat",ios::binary);
    if (!input)
	{
		cout<<"File cannot be opened．"<<endl;
		return ;
    }
	Mytel s;
	cout<<"所有朋友信息为："<<endl;
	cout<<"姓名"<<setw(8)<<"电话"<<endl;
	input.read((char *)&s,sizeof(s));
	while(input)
	{
		s.disp();
		input.read((char*)&s,sizeof(s));
	};
	input.close();
}
void func3()
{
	string sname;
	ifstream file("phone.dat",ios::binary);
    if (!file)
	{
		cout<<"File cannot be opened．"<<endl;
		return ;
    }
	Mytel one;
	file.seekg(0);
	cout<<"输入要查询的姓名（可只输入姓氏）:";
	cin>>sname;
	cout<<"输出查询结果:"<<endl;
	cout<<"姓名"<<setw(8)<<"电话"<<endl;	
	file.read((char *)&one,sizeof(one));
	while(file)
	{
		if(one.getname()==sname)
			one.disp();
		file.read((char*)&one,sizeof(one));
	};
	file.close();
}
void func4()
{
	ofstream outapp("phone.dat",ios::out|ios::app|ios::binary);
    if (!outapp)
	{
		cout<<"File cannot be opened．"<<endl;
		return;
    }
    Mytel one;
	cout<<"姓名"<<setw(8)<<"电话"<<endl;
	one.getdata();
	outapp.write((char*)&one,sizeof(one));
	outapp.close();
}
int main()
{
	int sel;
	while(1)
	{ 
		cout<<"***************电话薄管理系统***************";
		cout<<endl<<endl;
		cout<<"1:输入数据      2:输出数据      3:按姓名查询" <<endl
			<<"4:添加数据      0:退出"<<endl;
		cout<<"********************************************";
        cout<<"\n请选择(0-4)";
		cin>>sel;
		switch(sel)
		{
			case 1:func1();break;
            case 2:func2();break;
		    case 3:func3();break;
		    case 4:func4();break;
		    case 0:exit(1);
		}
    }
	return 0;
}
