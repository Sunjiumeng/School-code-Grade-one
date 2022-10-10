//程序Li7_9.cpp
//示例STL容器的使用
#include <iostream>
#include <vector>//包含向量容器头文件
using namespace std;
int main()
{
	int i;
	vector<int> nums;//整型向量，长度为0
	nums.insert(nums.begin(),-99 ); // 在向量第一个位置插入-99
    nums.insert(nums.begin(),4 );   // 在向量第一个位置插入4
	nums.insert(nums.end(),50);      // 在向量末尾插入50
	for(i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";         // 依次输出向量中所有元素：4 -99 50
	cout<<endl;
	nums.erase(nums.begin());        // 删除向量中第一个元素4
	nums.erase(nums.begin());        // 删除向量中第一个元素-99
	for(i=0;i<nums.size();i++)
		cout<<nums[i]<<endl;         // 依次输出向量中所有元素：50
	return 0;
}
