//方法2 xt8_3_2.cpp 
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int count=0;
	streampos start,end;
   	ifstream infile("file.txt");//以输入方式打开文件file.txt

	if (!infile)
	{
		cout<<"File cannot be opened．"<<endl;
		return 0;
    }
	infile.seekg(0,ios::beg);
    start=infile.tellg();
    infile.seekg(0,ios::end);
    end=infile.tellg();
    cout<<"文件有："<<end-start<<"个字符";
    infile.close();
	return 0;
}	


