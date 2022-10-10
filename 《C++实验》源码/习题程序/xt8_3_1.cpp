//方法1 xt8_3_1.cpp 
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int count=0;
   	ifstream infile("file.txt");//以输入方式打开文件file.txt

	if (!infile)
	{
		cout<<"File cannot be opened．"<<endl;
		return 0;
    }
	while(!infile.eof())//从文件file.txt中读出数据
	{
		infile.get();
		count=count+1;
	}
    cout<<"文件有："<<count<<"个字符"<<endl;
    infile.close();
	return 0;
}	


