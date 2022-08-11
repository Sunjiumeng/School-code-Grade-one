#include <stdio.h>
#define h 3   //行高
#define l 3   //行宽
void meun()
{
	printf(" *****************\n");
	printf(" ******1.play*****\n");
	printf(" ******2.exit*****\n");
	printf(" *****************\n");
	printf(" *****************\n");
}
void bl(char tu[h][l],int H,int L)
{
	bl(tu[h][l],H,L); 
}
void picture()
{
	printf("  |  |  \n");
	printf("--|--|--\n");
	printf("  |  |  \n");
	printf("--|--|--\n");
	printf("  |  |  \n");
}
void game()
{
	char tu[h][l]={0};
	void bl(char tu[h][l],int H,int L);
	picture();
}
int main()
{
	int a=0;
  do
  {
	meun();
		printf("Please choose:\n");
		scanf("%d",&a);
	switch(a)
	{
		case 1:game();break;
		case 2:printf("Over!\n");break;
		default :printf("You enter a eorrow number!");
	}
  }while(a);
} 
