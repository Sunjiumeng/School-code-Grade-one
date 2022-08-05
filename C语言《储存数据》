#include <stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n); 
	int s[m][n],d[n][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
			d[j][i]=s[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
