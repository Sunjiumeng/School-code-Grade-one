//程序Li3_19.cpp
//应用实例
#include <iostream>  
#include <string>
using namespace std; 
class Student //类的定义 
{
	int no;         //学生的学号
	string name;    //学生的姓名
	float score;   //学生的成绩
	Student* per;   //当前结点指针 
	Student* next;  //下一个结点指针 
	public:  
		Student();                        //构造函数
        Student* find(int i_no);                   //查找指定学号的学生
		void edit(string i_newname,float i_score); //修改学生的信息
		void erase();                               //删除指定学号的学生
		int add(Student* i_newStudent);           //增加学生
		int getno();                                //获得学生的学号
		string getname();                           //获得学生的名字
        float getscore();                          //获得学生的成绩
		static int maxno;
};  
Student::Student()                         
{
	score=0.0;
	per=NULL;                     
	next=NULL;                   
}
Student* Student::find(int i_no)  
{  
	if(i_no==no)  
		return this;  
	if(next!=NULL)  
		return next->find(i_no); 
	return NULL;  
}  
void Student::edit(string i_name,float i_score)  
{ 
	if(i_name=="")  
		return ;  
	name=i_name; 
	score=i_score;
}  
void Student::erase()  
{ 
	if(no<0)  
		return ; 
	if(per!=NULL) 
		per->next=next;  
	if(next!=NULL)  
		next->per=per;  
	next=NULL;  
	per=NULL;  
}  
int Student::add(Student* i_newStudent)  
{ 
	int no=maxno+1;  
	while(true)
	{ 
		if(NULL==find(no)) 
			break;
		no=no+1;
	}  
	Student* tmp=this;  
	while(true){
		if(tmp->next==NULL)  
			break;  
		tmp=tmp->next;  
		}  
	tmp->next=i_newStudent;  
	i_newStudent->next=NULL;  
	i_newStudent->per=tmp;  
	i_newStudent->no=no;  
	return no;  
}
int Student::getno(){return no;}
string Student::getname(){return name;}
float Student::getscore(){return score;} 
int Student::maxno=1000;
int main()  
{
	Student* Studentroot=new Student();
	string input1;
	float input2;
	Student* tmp=NULL; 
	while(true){ 
		cout<<"输入指令：查找(F),增加(A),编辑(E),删除(D),退出(Q)"<<endl; 
		cin>>input1; 
		if(("F"==input1)||("f"==input1)) 
		{ 
			cout<<"输入学号:"; 
			int no=-1; 
			cin>>no;
			tmp=Studentroot->find(no);
			if(tmp==NULL) 
			{ 
				cout<<"没找到"<<endl; 
				continue; 
			}  
			cout<<"学号:"<<tmp->getno(); 
			cout<<"  姓名:";  
			string name;  
			if((name=tmp->getname())!="") 
				cout<<name;  
			else  
				cout<<"未输入"<<endl;  
			cout<<" 成绩："<<tmp->getscore()<<endl;
		} 
		else if((input1=="A")||(input1=="a")) 
		{ 
			cout<<"输入姓名，成绩: ";  
			cin>>input1>>input2;;  
			tmp=new Student();  
			tmp->edit(input1,input2); 
			cout<<"学号: "<<Studentroot->add(tmp)<<endl; 
		}  
		else if((input1=="E")||(input1=="e"))
		{  
			cout<<"输入学号:"; 
			int no=0; 
			cin>>no;  
			tmp=Studentroot->find(no);  
			if(tmp==NULL)  
				{ 
				cout<<"空号"<<endl; 
				continue;  
				}  
			cout<<"新姓名,新成绩: "; 
			cin>>input1>>input2;  
			tmp->edit(input1,input2);  
			cout<<"更改成功."<<endl; 
		}  
		else if((input1=="D")||(input1=="d")) 
		{ 
			cout<<"输入学号:"; 
			int no=0; 
			cin>>no; 
			tmp=Studentroot->find(no); 
			tmp->erase();
			cout<<"已成功删除"<<endl;
			delete tmp;
		} 
		else if((input1=="Q")||(input1=="q"))
		{  
			break;  
		}
		    else 
			{ 
				cout<<"输入有误！"<<endl; 
			}  
		}  
	delete Studentroot; 
	return 0;
}  
