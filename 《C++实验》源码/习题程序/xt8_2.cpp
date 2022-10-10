//xt8_2.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str[80];
	ifstream infile("f1.txt");//以输入方式打开文件f1.txt
    ofstream ("f2.txt");//以输出方式打开文件f2.txt
	if (!infile||!outfile)
	{
		cout<<"File cannot be opened．"<<endl;
		return 0;
    }
	while(!infile.eof())//从文件f1.txt中读出数据，并输出到f2.txt。
	{
		infile.getline(str,sizeof(str));//从文件中读出一行数据
	   	outfile<<str<<endl;
	}
    infile.close();
    outfile.close();
	return 0;
}	


