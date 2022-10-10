//程序Li7_13.cpp
//示例STL的使用
#include <iostream>
#include <list>//包含双向链表容器头文件
#include <iterator>//迭代器头文件，可以省略
#include<algorithm> //STL算法
using namespace std;
int main()
{
	list< int >List;
	int Value=0,Option=0;
   	do{  
		cout<<endl
			<<"        双向链表菜单"<<endl
			<<" 1. 在链表首部插入一个结点 "<<endl
			<<" 2. 在链表尾部插入一个结点 "<<endl
			<<" 3. 从链表首部删除一个结点 "<<endl
			<<" 4. 从链表尾部删除一个结点 "<<endl
			<<" 5. 从链表首部开始输出结点内容 "<<endl
			<<" 6. 从链表尾部开始输出结点内容 "<<endl
			<<" 0. 退出 "<<endl
			<<"输出选择：";
		cin>>Option;
		switch(Option)
		{
		case 1:
			{
			cout<<"输入结点数据：";
			cin>>Value;
			List.insert(List.begin(),Value);
			cout<<"结点"<<Value<<"成功插入。"<<endl;
			break;
			}
        case 2:
			{
			cout<<"输入结点数据：";
			cin>>Value;
			List.insert(List.end(),Value);
            cout<<"结点"<<Value<<"成功插入。"<<endl;
			break;
			}
        case 3:
			{
			if(List.begin()==List.end())
				cout<<endl<<"没有链表，不能进行删除。";
			else
				{
				List.erase(List.begin()) ;
                cout<<endl<<"结点删除成功。"<<endl;
			    }
                break;
            } 
		case 4:
			{
				if (List.begin()==List.end())
                	cout<<endl<<"没有链表，不能进行删除。";
			    else
                {
				List.erase(List.end());
                cout<<endl<<"结点删除成功。"<<endl;
                } 
			    break;
			}
		case 5:
			{
		    list<int>::const_iterator p1;//p1是整型双向链表的迭代子
            if(List.begin()==List.end())
                cout<<endl<<"没有链表，没有结点输出。";
			else
			{
		    cout<<"从首部开始输出链表:"<<endl;
	        for(p1=List.begin();p1!=List.end();p1++)
		    cout<<*p1<<" ";   // 依次输出链表中所有元素
	        cout<<endl;
			}
			break;
			}
		case 6:
			{
			list<int>::reverse_iterator p2;//p2是整型双向链表的迭代子
			if (List.rbegin()==List.rend())
                cout<<endl<<"没有链表，没有结点输出。";
			else
			{
				p2=List.rbegin();//反向迭代指向最后一个元素
                cout<<"从尾部开始输出链表:："<<endl;
	            while(p2!=List.rend())//当反向迭代不指向第一个元素时
				{
		        cout<<*p2<<" ";   // 逆向输出链表中所有元素：
		        p2++;
				}
			} 
	        cout<<endl;
 			break;
			}
		}
     }while(Option!=0);
	 return 0;
}
