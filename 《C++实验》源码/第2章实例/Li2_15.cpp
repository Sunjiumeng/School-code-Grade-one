//程序Li2_15.cpp
//应用实例
#include<iostream>
#include<string>
using namespace std;
struct Student
{
   long num;
   string name;
   float score;
   struct  Student *next;
};
void input(Student *&head) 
{
   long num;
   int n=0;
   Student *newNode,*p;
   do{
	  cout<<"输入第"<<n+1<<"个学生的学号，输入0结束：";
      cin>>num;
      if(num==0)  break;
      n++;
      newNode=new Student;
      newNode->num=num;
      cout<<"请输入学号为"<<num<<"的姓名, 成绩：";
      cin>>newNode->name>>newNode->score;
      if(head==NULL)
          head=newNode;
      else
        p->next=newNode;
        p=newNode;
   }while(1);
   p->next=NULL;
   cout<<"共输入"<<n<<"个学生记录"<<endl;
   return;
}
float average(Student *head)
{
	Student *p;
    p=head;
	int n=0;
	float ave=0.0;
    if(head==NULL)  return 0.0;
    do
	{
		n=n+1;
        ave+=p->score;
        p=p->next;
	}while (p!=NULL);
	ave=ave/n;
	return ave;
}   
void print( Student* const head)
{
	Student *p;
    int  i=0;
    if(head==NULL)  return;
    p=head;
    cout<<"学号    姓名    成绩   "<<endl;
    do
    {
		cout<<p->num<<"      "<<p->name;
        cout<<"      "<<p->score<<endl;
        p=p->next;
	}while(p!=NULL);
}
int main()
{
       Student *stu=NULL;
       input(stu);
	   float ave=average(stu);
       print(stu);
       cout<<"全班平均成绩为："<<ave<<endl;
       return 0;
}