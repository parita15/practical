#include<stdio.h>
#include<conio.h>
void linearsearch(int a[],int n)
{
	int flag,i,s;
		printf("\nEnter value to search:");
	scanf("%d",&s);
	flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag=0;
		//printf("\nValue found...");
		}
	}
	if(flag==0)
		printf("\nValue found....");
	else
		printf("\nValue not found....");
}
int main()
{
	int n,a[20],i;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter array elelemts:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	linearsearch(a,n);
	//i=1;
	
}
