#include<stdio.h>
#include<conio.h>

void b_search(int a[],int n,int s)
{
	int mid,low,high,flag,i;
	low=1;
	high=n;
	flag=1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(s<a[mid])
			high=mid-1;
		else if(s>a[mid])
			low=mid+1;
		else if(s==a[mid])
		{
			flag=0;
			//printf("\nValue found...");
			break;
		}	
	}
	if(flag==0)
		printf("\nValue found...");
	else
		printf("\nValue not found....");
}
int main()
{
	int i,n,s,a[20];
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array:");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter the value to search:");
	scanf("%d",&s);
	b_search(a,n,s);
	
}
