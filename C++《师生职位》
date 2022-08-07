#include <iostream>
using namespace std;
class Person
 {
  	public:
   		Person(string a,string b,int c)
 		{
  		 Name=a;
   		 Sex=b;
   	 	 Old=c;
  		}
  		void print()
  		{
  		 cout<<"Name:"<<Name<<endl;
   		 cout<<"Sex:"<<Sex<<endl;
   		 cout<<"Old:"<<Old<<endl;
  		}
	protected:
  		string Name;
     	string Sex;
      	int Old; 
 };
 class Teacher:public Person
 {
  	public:
  	Teacher(string a,string b,int c,string d,string e):Person(a,b,c)
	{
   		Professor=d;
   		Course=e;
  	}
  	void print()
  	{
   		cout<<"Name:"<<Name<<endl;
   		cout<<"Sex:"<<Sex<<endl;
   		cout<<"Old:"<<Old<<endl;
  		 cout<<"Professor:"<<Professor<<endl;
  		 cout<<"Cousre:"<<Course<<endl;
   		cout<<"--------------------------------"<<endl;
 	 }
	protected:
  		string Professor;
  		string Course;    
 };
 class Student:public Person
 {
  public:
  	Student(string a,string b,int c,string f,string g):Person(a,b,c) 
  	{
   		Id=f;
   		Department=g;
  	}
  	void print()
  	{
   		cout<<"Name:"<<Name<<endl;
  		cout<<"Sex:"<<Sex<<endl;
  		cout<<"Old:"<<Old<<endl;
   		cout<<"Id:"<<Id<<endl;
   		cout<<"Department:"<<Department<<endl;
   		cout<<"--------------------------------"<<endl;
  	}
  protected:
  	string Id;
 	string Department;   
 };
 class Gradstudent :public Student
 {
  public:
  	Gradstudent(string a,string b,int c,string f,string g,string h):Student (a,b,c,f,g) 
  	{
  		Professor=h;
  	}
  	void print()
  	{
   		cout<<"Name:"<<Name<<endl;
   		cout<<"Sex:"<<Sex<<endl;
   		cout<<"Old:"<<Old<<endl;
   		cout<<"Id:"<<Id<<endl;
   		cout<<"Department:"<<Department<<endl;
   		cout<<"Professor:"<<Professor<<endl;
  	}
 protected:
  	string Professor;
};
int main()
{
 Teacher t("He yufeng","Man",31,"Spring","Java");
 t.print();
 Student s("Huang haonan","Woman",20,"2124030110","Computer");
 s.print();
 Gradstudent ss("Sun jiumeng","Man",22,"2124030160","SSM","He yufeng");
 ss.print();
 return 0; 
}  
