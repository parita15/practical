#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
	int n,i,j,*a,deg;
	printf("enter total number of vertex");
	scanf("%d",&n);
	a=(int *)malloc(n*n*sizeof(int));
	while(1)
	{
		printf("Enter source vertex or -1 for break");
		scanf("%d",&i);
		if(i==-1)	
			break;
		printf("Enter destibation vertex");
		scanf("%d",&j);
		*(a+i*n+j)=1;
		*(a+j*n+i)=1;	
	}
	for(i=1;i<=n;i++)
	{
		deg=0;
		for(j=1;j<=n;j++)
		{
			if(*(a+i*n+j)==1)
			{
				printf("(%d,%d)\t",i,j);
				deg++;
			}
		}
		printf("\nDegree of vertex %d = %d\n",i,deg);	
	}
	free(a);
	return 0; 
} 

