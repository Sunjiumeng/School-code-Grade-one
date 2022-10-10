//程序Li2_14.cpp
//示例string类型的基本用法
#include <iostream>
#include <string>
using namespace std;
int main( )
{
	string s1;
	string s2="Bravo";
	string s3=s2;
	string s4(10,'x');
	cout<<"s1="<<s1<<endl;
    cout<<"s2="<<s2<<endl;
    cout<<"s3="<<s3<<endl;
	cout<<"s4="<<s4<<endl;
	if(s2>s4)
		cout<<"s2>s4";
	else if (s2<s4)
        cout<<"s2<s4";
	else 
		cout<<"s2=s4";
	cout<<endl;
	return 0;
}