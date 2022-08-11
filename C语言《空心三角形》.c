#include <stdio.h>
int main()  
{
    int i, j,n;
    	printf("Please   n = ")  ;
		scanf("%d",&n); 
    for (i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            for (j=0; j<2*n-1; j++)
            {
                if(j==n-i-1||j==n+i-1)
                    printf("*");
                else
                    printf(" ");
            }
        }else{   for(j=0; j<2*n-1; j++)
                printf("*");
             }
        printf("\n");
    }
   return 0;
}
