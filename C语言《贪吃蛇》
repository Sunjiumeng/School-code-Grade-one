#include <stdio.h>
#include <time.h>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#define SIZE 19
//void init(int*, int*, int[SIZE][SIZE]);
//int getCommand(int);
//int move(int, int*, int[SIZE][SIZE]);
//void draw(int[SIZE][SIZE]);

int main()
{
	void init(int*, int*, int[SIZE][SIZE]);//初始化函数声明 
	int getCommand(int);//获取玩家实时输入的指令 
	int move(int, int *, int[SIZE][SIZE]);//先执行初始化指令使蛇移动，吃到食物的情况下length+1，撞墙或者撞到自己游戏结束 
	void draw(int [SIZE][SIZE]);//画出地图及蛇在地图上的运动 
	int command, result, length = 0;
	int map[SIZE][SIZE] = { 0 };//定义二维数组时必须对其进行初始化以确定地图能够生成空白部分为0 
	init(&command, &length, map);
	while(1)//无限循环 
	{
		command = getCommand(command);
		result = move(command, &length, map);
		if (result == 1)
		{
			break;
		}
		else draw(map);
		Sleep(1000);//程序休眠1000毫秒（1秒） 
	}
} 
void init (int *command, int *length, int map[SIZE][SIZE])//用指针对游戏进行初始化是为了更快地开始游戏，因为指针能更快地找到地址并进行初始化 
{
	*command = 2;//初始化初始命令 
	*length = 3;//初始化初始长度 
	map[2][1] = 1;//初始化蛇头位置 
	map[1][1] = 2;//初始化蛇身位置 
	map[0][1] = 3;//初始化蛇尾位置 
	map[3][3] = -1; //初始化食物位置 
} 

int getCommand(int command)//获取玩家实时输入的指令 
{
	int t = -1;//定义变量t用于判断指令是否有效 
	if (kbhit())//如果有键盘输入， 
	{
		switch (getch())//getch()是头文件conio.h里的函数，是等待按下任意键再执行以下程序 
		{
		case ' ': t = 32;break;
		case 'A': case 'a': t = 3;break; 
		case 'S': case 's': t = 2;break;
		case 'D': case 'd': t = 1;break;
		case 'W': case 'w': t = 0;break;//a,s,d,w分别表示左、下、右、上 
		}
		if (t != -1 && fabs(command - t) != 2)//t ！= -1是对除asdw以外的操作键无效化，abs（t - command）！= 2 不让蛇反向移动，如左右，初始command为左3，按d键t = 1,1-3的绝对值为2，就不转向 
		{
			command = t;
		}
	}	
	return command;
} 
/*1代表蛇头，2-N代表蛇身，-1代表食物 */ 
int move(int command, int *length, int map[SIZE][SIZE]) 
{
	/*move的第1部分是执行command*/
	int i, j, head_i, head_j;//head_i,head_j分别储存新的头位置 
	for (i = 0; i < SIZE; i++)//地图的行 
	{
		for(j = 0; j < SIZE; j++)//地图的列 
		{
			if (map[i][j] == *length)
			{
				map[i][j] = 0;
			}//按上一个指令方向继续移动，尾部不断前进即原来的地方再次变为0，
			//身体不断前进，即比原来所在的数渐增 
			else if (map[i][j] > 1)
			{
				map[i][j] += 1;
			}
			else if (map[i][j] == 1)
			{
				map[i][j] += 1;
				switch(command)
				{
				case 0:head_i = i - 1,head_j = j;break;
				case 1:head_i = i, head_j = j + 1;break;
				case 2:head_i = i + 1, head_j = j;break;
				case 3:head_i = i, head_j = j - 1;break;
				}//获取新的头位置 
			}
		} 
	} 
	
	/*move的第2部分是吃到食物蛇长+1,并在地图范围内随机生成新的食物 */
	if (map[head_i][head_j] == -1)
	{
		map[head_i][head_j] = 1;
		*length = *length + 1;
		while (1)
		{
			i = rand() % SIZE, j = rand() % SIZE;
			if (map[i][j] == 0)//0代表没有蛇和食物的地方 
			{
				map[i][j] = -1;//新的食物点 
				break;
			}
		}	
	}
	/*move的3部分是撞到自己或墙，返回1游戏结束 */ 
	else if (map[head_i][head_j] > 0 || head_i < 0 || head_j < 0 || head_i == SIZE ||head_j == SIZE)
	{
		return 1;	
	} //map[head_i][head_j] > 0是撞到自己，head_i，head_j<0，head_i，head_j == SIZE是撞到墙的情况 
	
	/*move的第4部分蛇正常移动,返回0，画出地图内容*/ 
	else map[head_i][head_j] = 1;
	return 0; 
}//2,3,4部分都是对移动结果的分析 

void draw(int map[SIZE][SIZE])
{

	int i, j;
	system("cls");//清除屏幕 ,让每步都在同一个地图显示 
	for (i = 0; i <= SIZE; i++) //输出上边界 
	{
		if (i == 0) printf("┏");
		else if (i == SIZE) printf("┓");
		else printf(" ━");
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (j == 0) printf("┃");//输出左边界
			else if (map[i][j] == 1) printf("○");//蛇头 
			else if (map[i][j] > 1) printf("●") ;//蛇身 
			else if (map[i][j] == -1) printf("★");//食物 
			else printf("  ");
			if (j == SIZE - 1) //输出右边框
				printf("┃");	
		}
		printf("\n");
	}
	for (i = 0; i <= SIZE; i++)
	{
		if (i == 0) printf ("┗");
		else if (i == SIZE) printf("┛");
		else printf(" ━");
	}//输出下边界 
	printf("\n");
	
} 
