//程序Li7_12.cpp
//应用实例
#include <iostream>
using namespace std;
template <typename NodeType> class Node;          //结点结构
template <typename NodeType>class DoubleLinkList; //双向链表类
template <typename NodeType>                      //定义模板
class Node
{
	friend class DoubleLinkList<NodeType>;     //友元
	private:
		NodeType Data;                         //模板类型的结点    
		Node <NodeType> *NextNode;             //前向指针
		Node <NodeType> *PreviousNode;         //后向指针
    public:
		Node();
		Node(NodeType&Value);
		~Node();                               //析构函数
};
template <typename NodeType>
class DoubleLinkList
{ 
    private:
        Node <NodeType> *FirstNode;           //链表首部指针
        Node <NodeType> *RearNode;            //链表尾部指针
    public:
	    DoubleLinkList();                     //双向链表构造函数
	    ~DoubleLinkList();                    //双向链表析构函数
        bool IsEmpty();                       //判断是否是空链表
	    void InsertAtFront(NodeType&Value);   //结点插入链表头
	    void InsertAtRear(NodeType&Value);    //结点插入链表尾
	    bool RemoveFromFront();               //删除链表首部一个结点 
	    bool RemoveFromRear();                //删除链表尾部一个结点
	    void TraverseForward();               //从链表首部开始输出结点内容
	    void TraverseBackwards();             //从链表尾部开始输出结点内容 
	    Node<NodeType> *CreateNode(NodeType&Value);//生成链表
};
int main()
{
	DoubleLinkList< int > List;
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
			{cout<<"输入结点数据：";
			 cin>>Value;
			 List.InsertAtFront(Value);
			 break;}
        case 2:
			{cout<<"输入结点数据：";
			 cin>>Value;
			 List.InsertAtRear(Value);
			 break;}
        case 3:
			{List.RemoveFromFront();
			 break;}
		case 4:
			{List.RemoveFromRear();
			 break;}
		case 5:
			{List.TraverseForward();
			 break;}
		case 6:
			{List.TraverseBackwards();
			 break;}
		}
     }
	 while(Option!=0);
	 return 0;
}
template<typename NodeType>
Node<NodeType>::Node():Data(NULL),NextNode(NULL),PreviousNode(NULL){}
template<typename NodeType>
Node<NodeType>::Node(NodeType&Value):Data(Value),NextNode(NULL),PreviousNode(NULL){}
template<typename NodeType>
Node<NodeType>::~Node(){}
template<typename NodeType>
DoubleLinkList<NodeType>::DoubleLinkList():FirstNode(NULL),RearNode(NULL){}
template<typename NodeType>
DoubleLinkList<NodeType>::~DoubleLinkList()
{ 
	Node<NodeType> *CurrentNode=FirstNode,*TempNode;
	while(CurrentNode!=NULL)
		{TempNode=CurrentNode;
         CurrentNode=CurrentNode->NextNode;//当前指针移动到下一结点
		 delete TempNode;//删除结点
		}
}
template <typename NodeType>
bool DoubleLinkList<NodeType>::IsEmpty()
{ 
	if(FirstNode==NULL)
		return true;
    else 
		return false;
}
template<typename NodeType>
Node<NodeType> *DoubleLinkList<NodeType>::CreateNode(NodeType&Value)
{
	Node<NodeType> *NewNode= new Node<NodeType>(Value);
	return NewNode;
}
template<typename NodeType>
void DoubleLinkList<NodeType>::InsertAtFront(NodeType&Value)
{
	Node<NodeType> *NewNode=CreateNode(Value);
	if(IsEmpty())//判断链表为空否
		{FirstNode=RearNode=NewNode;}
	else
		{FirstNode->PreviousNode=NewNode;
	     NewNode->NextNode=FirstNode;
		 FirstNode=NewNode;
		 FirstNode->PreviousNode=NULL;}
	cout<<"结点"<<FirstNode->Data<<"成功插入。"<<endl;
}
template <typename NodeType>
void DoubleLinkList<NodeType>::InsertAtRear(NodeType&Value)
{  
	Node<NodeType> *NewNode=CreateNode(Value);
	if(IsEmpty())//判断链表为空否
		{FirstNode=RearNode=NewNode;}
	else
		{NewNode->PreviousNode=RearNode;
	     RearNode->NextNode=NewNode;
		 RearNode=NewNode;
		 RearNode->NextNode=NULL;}
	cout<<"结点"<<RearNode->Data<<"成功插入。"<<endl;
}
template<typename NodeType>
bool DoubleLinkList<NodeType>::RemoveFromFront()
{ 
	if(IsEmpty())//判断链表为空否
		{cout<<endl<<"没有链表，不能进行删除。";
	     return false;}
	else 
		{Node<NodeType> *CurrentNode=FirstNode;
       	if(FirstNode==RearNode)
			FirstNode=RearNode=NULL;
		else
			{
			 FirstNode=FirstNode->NextNode;
		     FirstNode->PreviousNode=NULL;}
		delete CurrentNode;
		cout<<endl<<"结点删除成功。"<<endl;
		return true;}
}
template <typename NodeType>
bool DoubleLinkList<NodeType>::RemoveFromRear()
{
	if(IsEmpty())//判断链表为空否
		{cout<<endl<<"没有链表，不能进行删除。";
	     return false;}
	else 
		{Node<NodeType> *TempNode=RearNode;
	     if(FirstNode==RearNode)
			 FirstNode=RearNode=NULL;
		 else 
		 {RearNode=RearNode->PreviousNode;
		 RearNode->NextNode=NULL;}
		 delete TempNode;
		 cout<<endl<<"结点删除成功。";
		 return true;}
}
template<typename NodeType>
void DoubleLinkList<NodeType>::TraverseForward()
{ 
	Node<NodeType> *CurrentNode=FirstNode;
    if(IsEmpty())//判断链表为空否
		{
		cout<<"没有链表，没有结点输出。"<<endl;
		return;
		}
	cout<<endl<<"从首部开始输出链表:"<<endl;
	while(CurrentNode!=NULL)
		{cout<<CurrentNode->Data<<"  ";
	     CurrentNode=CurrentNode->NextNode;}
}
template<typename NodeType>
void DoubleLinkList<NodeType>::TraverseBackwards()
{
	if(IsEmpty())//判断链表为空否
		{
		cout<<"没有链表，没有结点输出。"<<endl;
		return;
		}
	Node<NodeType> *CurrentNode=RearNode;
	cout<<endl<<"从尾部开始输出链表:"<<endl;
	while(CurrentNode!=NULL)
		{cout<<CurrentNode->Data<<"   ";
	     CurrentNode=CurrentNode->PreviousNode;}
}
