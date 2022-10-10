//Li5_13.cpp
//应用实例
#include<iostream>
#include<string>
using namespace std;
class Employee                    //基类
{
	protected:
		int no;                   //编号
	    string name;              //姓名
	    float salary;             //月薪总额
	    static int totalno;       //本公司目前编号最大值
    public:
		Employee()
		{
			no=totalno++;      //输入的员工编号为目前最大编号加1
		    cout<<"职工姓名:";
		    cin>>name;
		    salary=0.0;        //总额初值为0
		}      

		~Employee(){}
	    virtual void pay()=0;      //计算月薪函数
	    virtual void display()=0;  //输出员工信息函数
};
class Technician: public Employee   //派生类，兼职技术人员类
{
	private:
		float hourlyrate;          //每小时酬金
	    int workhours;             //当月工作时数
    public:
		Technician()               //构造函数
		{
			hourlyrate=100;              //每小时酬薪100元
		    cout<<name<<"本月工作时间：";
            cin>>workhours;
		}          
	void pay()                     //计算兼职技术人员月薪函数
	{
		salary=hourlyrate*workhours; //计算月薪，按小时计算
	}
	void display()                   //显示兼职技术信息函数
	{
		cout<<"兼职技术人员："<<name<<",编号：";
		cout<<no<<"，本月工资："<<salary<<endl;
	}

};
int Employee::totalno=10000;           //员工编号基数为10000
class Saleman:virtual public Employee//派生类，销售员类
{
	protected:
		float commrate;     		//按销售额提取酬金的百分比
	    float sales;                //当月销售额
    public:
		Saleman()                   //构造函数
		{
			commrate=0.04f;         //销售提成比例为4%
	        cout<<name<<"本月销售额：";
	        cin>>sales;
		}           
	void pay()                      //计算销售员月薪函数
	{
	    salary=sales*commrate;      //月薪=本月销售额*销售提成比例
	}
	void display()                  //显示销售员信息函数
	{
		cout<<"销售员："<<name<<",编号：";
		cout<<no<<",本月工资："<<salary<<endl;
	}

};
class Manager:virtual public Employee //派生类，经理类
{
	protected:
		float monthlypay; 	          //固定月薪数
public:
	Manager()                         //构造函数
	{
		monthlypay=8000;              //固定月薪8000元 
	}                                                        

	void pay()                        //计算经理月薪函数
	{
		salary=monthlypay;            //月薪总额即固定月薪数
	}                                                        
	void display()                    //显示经理信息函数
	{
		cout<<"经理:"<<name<<",编号：";
		cout<<no<<",本月工资:"<<salary<<endl;
	}
};
class Salesmanager:public Manager,public Saleman //派生类，销售经理类
{
public:
	Salesmanager()                               //构造函数
	{
		monthlypay=5000;                         //保底工资5000元
	    commrate=0.05f;                          //销售提成比例5%
        cout<<name<<"所管部门月销售量:";
	    cin>>sales;
	}	
	
	void pay()                                   //计算销售经理月薪函数
	{
		salary=monthlypay+commrate*sales;       //月薪=固定月薪+销售提成
	}
	void display()                              //显示销售经理信息函数
	{
		cout<<"销售经理:"<<name<<",编号:"<<no<<":本月工资:"<<salary<<endl;
	}

};                                                           
int  main()                                     //主函数
{
	Manager m1;
    Technician t1;
    Saleman s1;
    Salesmanager sm1;
	Employee* em[4]={&m1,&t1,&s1,&sm1};
    cout<<"上述人员的基本信息为: "<<endl;
	for(int i=0;i<4;i++)
	{
		em[i]->pay();
        em[i]->display();
	}
	return 0;
}