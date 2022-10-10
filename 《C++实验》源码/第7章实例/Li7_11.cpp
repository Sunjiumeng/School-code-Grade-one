//程序Li7_11.cpp
//reverse与sort算法的应用
#include<iostream> 
#include<vector> //向量容器类包含在vector头文件中
#include<algorithm> //倒序算法、排序算法
using namespace std;    
bool inorder(int,int);
int main()
{
	vector<int> nums;//整型向量，长度为0
	nums.insert(nums.begin(),-99 ); // 在向量第一个位置插入-99
    nums.insert(nums.begin(),4 );   // 在向量第一个位置插入4
	nums.insert(nums.end(),50);      // 在向量末尾插入50
	cout<<"向量的初始顺序为："<<endl;
	vector<int>::iterator out;    //定义一个迭代器out，指向整型向量
	for(out=nums.begin();out!=nums.end();++out)
		cout<<*out<<" ";
	cout<<endl;
	reverse(nums.begin(),nums.end());   //调用倒序算法
	cout<<"向量倒置后的顺序为："<<endl;
	for(int i=0;i<3;i++)
		cout<<nums[i]<<" " ;
	cout<<endl;
    sort(nums.begin(),nums.end());   //调用第一种形式排序算法
	cout<<"使用第一种形式排序后，向量的顺序为："<<endl;
	for(i=0;i<3;i++)
		cout<<nums[i]<<" " ;
    cout<<endl;
    sort(nums.begin(),nums.end(),inorder);   //调用第二种形式排序算法
    cout<<"使用第二种形式排序后，向量的顺序为："<<endl;
    for(out=nums.begin();out!=nums.end();++out)
		cout<<*out<<" ";
	cout<<endl;
	return 0;
}
bool inorder(int a,int b){return a>b;};









