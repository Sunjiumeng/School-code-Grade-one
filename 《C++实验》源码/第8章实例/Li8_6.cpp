//Li8_6.cpp
//从输入的串分离中数字串，示例常用成员函数I/O
#include <iostream>
using namespace std;
int main()
{
	char str[10];
	int i=0;
	cout<<"输入一个字符串（最多9个字符）";
	cin.get(str,10,'!');//输入一个字符串
	char c=str[i];
	cout<<"数字串为："<<endl;
	while (i<cin.gcount())
	{
	if (isdigit(c))//输出数字串
		cout.put(c);
	if(isdigit(c)&&!isdigit(str[i+1]))
		cout<<endl;
	i=i+1;
	c=str[i]; 
	}
	cout<<endl;
	return 0;
}	


