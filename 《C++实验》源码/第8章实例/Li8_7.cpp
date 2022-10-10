//Li8_7.cpp
//从输入的串分离中数字串, 先将其存入磁盘文件，
//然后将其读出并在屏幕上显示出来。
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str[10];
	int i=0;
	cout<<"输入一个字符串（最多9个字符）";
	cin.get(str,10,'!');//输入一个字符串
	ofstream outfile("f1.txt");//以输出方式打开文件f1.txt
	if (!outfile)
	{
		cout<<"File cannot be opened．"<<endl;
		return 0;
    }
	char c=str[i];
	while (i<cin.gcount())
	{
	if (isdigit(c))
		outfile<<c;//将数字串存入文件outfile
    if(isdigit(c)&&!isdigit(str[i+1]))
		outfile<<endl;
	i=i+1;
	c=str[i];
	}
	outfile<<'\0';
    outfile.close();
	ifstream infile("f1.txt");//以输入方式打开文件f1.txt
    if (!infile)
	{
		cout<<"File cannot be opened．"<<endl;
		return 0;
    }
	cout<<"存入f1.txt文件中的数字串为:"<<endl;
	while(!infile.eof())//从文件中读出数据，并输出到屏幕上。
	{
		infile.getline(str,sizeof(str));//从文件中读出一行数据
	    cout<<str<<endl;
	}
    infile.close();
	return 0;
}	


