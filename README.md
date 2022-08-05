# -
在校代码
#include <stdio.h>
#include <math.h>
#define pi 3.14159//定义pi的值
int sun();        //声明函数sun()用于初始化的页面排版   
int sun_01();     //声明函数sun_01用于鸡兔同笼
int sun_02();     //声明函数sun_02用于蜗牛爬井
int sun_03();     //声明函数sun_03用于最小公约数
double sun_04();  //声明函数sun_04用于求圆面积和周长
double sun_05();  //声明函数sun_05用于三角函数
double sun_06();  //声明函数sun_06用于求平均数
int sun_07();     //声明函数sun_07用于摩斯密码
int sun_08();     //声明函数sun_08用于Exit
int main()    
{ 
    sun();   
	int a;
		printf("Please enter a integer number:\n");
		scanf("%d",&a);
	switch(a)
	{
		int c;
		case 1: sun_01();break;
		case 2: sun_02();break;
		case 3: sun_03();break;
		case 4: sun_04();break;
		case 5: sun_05();break;
		case 6: sun_06();break;
        case 7: sun_07();break;
        case 8: sun_08();break;
		default :printf("You enter an eorr number!\n"); 
	}                            
 } 
int sun() 
{
	printf("\n");
	printf("              Welcome To Computer World               \n");     
	printf("******************************************************\n");
	printf("**          ****************************            **\n");
	printf("**          ****************************            **\n");
	printf("**          1.鸡兔同笼        2.蜗牛爬井            **\n");
	printf("**          3.最大公约数      4.圆面积和周长        **\n");
	printf("**          5.三角函数        6.求平均分            **\n");
	printf("**          7.摩斯密码        8.Exit                **\n");
	printf("**                                                  **\n");
	printf("**                                                  **\n");
	printf("******************************************************\n");
	printf("\n");
	
}
int sun_01()
{
	int a,b,h,l;              //定义鸡、兔、头、脚数
	printf("Please enter the numbers of head and leg :\n") ;//提示输入
	scanf("%d,%d",&h,&l);  //识别鸡兔的头、脚数量
	a=(4*h-l)/2;           //算出鸡的数量
	b=h-a;                 //算出兔的数量 
	if(l%2==1||a<0)
	{printf("Don't work out\n!");} 
	else
	{printf("%d,%d\n",a,b); }
		return 0; 
}
int sun_02()
 {
 	int m,n,sum=0,t,l;//定义变量：m白天增量，n夜晚减量，sum一天的走量,t天数 ,l路程 
 		printf("Please enter snail add and mul land's lengths:\n");//输入相关数值 
 		scanf("%d,%d,%d",&m,&n,&l);//识别输入的数值 
 	for(t=1;t>0;t++)
	{
	 sum=sum+m;                    //白天累加的路程 
	 	if(sum>=l)              
		{
			printf("%d",t);break; //符合条件，跳出循环打印 
		} 
	 sum=sum-n;                   //一夜后剩下的路程 
	 	if(sum>=l)
	 	{
	 		printf("%d",t);break; //符合条件，跳出循环打印 
		}                         //注意白天和黑夜的时间计算 
	}
	return 0; 
  } 
int sun_03()
{
	int a,b;                  //定义整形变量 
		printf("Please enter tow numbers:\n"); //提示输入2位数字
		scanf("%d,%d",&a,&b);  //识别输入的数值              
	int t;           //定义整形变量 
	t=(a<b)?a:b;           //找出相对小的数，并赋值给参量 
    for(;t>0;)            //for循环递减求出最大公约数，并赋值 
		{    
			if(a%t==0&&b%t==0) //if条件语句判断是能整除余0
			{
				printf("%d\n",t);break;
			}                 //符合输出结果，并跳出 
			else 
			{
				t--;         //条件不成立，改变条件并返回 
			}
		}                     
	return 0; 
} 
double sun_04()
{
	double r,d,s,l;
		printf("Please enter the r of tragle :\n"); //提示输入圆的半径 
		scanf("%lf",&r);//识别输入的半径 
	s=2*pi*r;               //求面积 
	d=2*r;                  //求直径 
	l=2*pi*d;               //求周长 
		printf("%lf %lf\n",s,l);//输出结果 
	return 0; 
}
double sun_05()
{
	double x1,x2,x3,y1,y2,y3;                  //定义双精度变量 
		printf("Please enter three integer numbers:\n");//输入弧度 
		scanf("%lf,%lf,%lf",&x1,&x2,&x3); //识别输入的数字 
	y1=sin(x1);        
	y2=cos(x2);
	y3=tan(x3);          //从库文件中调用三角函数，计算并赋值 
		printf("%lf,%lf,%lf\n",y1,y2,y3);//输出结果 
		return 0; 
} 
double sun_06()
{
	double *p,a[10],sum=0;//定义双精度变量和数组 
	p=&a[0];             //将指针指向数组的首地址 
	int i;             //定义整形变量 
		printf("Please enter ten students' scores:\n"); //输入10位学生的分数 
	for(i=0;i<10;i++)
		{
		 scanf("%lf",p++);//for循环识别输入的数值 ，注意可用p++与 &a[i] 
		}               
	for(i=0;i<10;i++)           //for循环累加数值 
		{
		 sum=sum+a[i];      //累加学生分说数并赋值 
		}
	double aver;                //定义变量平均数 
		aver=sum/10;          //求平均数 
		printf("%lf\n",aver); //输出结果 
	return 0;
} 
int sun_07()
{
	int a;
		printf("Please enter a number chain:\n");
		scanf("%d",&a);
	printf("%e\n",a);
	printf("%o\n",a);
	printf("%X\n",a);
	return 0;
}
int sun_08()
{
	printf("Over!  Welcome to use again!\n");
	return 0;
}
