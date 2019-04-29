#include<stdio.h>
#include<conio.h>
void merge(int n1,int n2,int n3,int a[],int b[],int c[]);
int main()
{
    int n1,n2,n3,a[10],b[20],c[20],i,k;
    printf("\n enter size of array1=");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        printf("\n enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n enter size of array2=");
    scanf("%d",&n2);
    for(i=1;i<=n2;i++)
    {
        printf("\n enter b[%d]=",i);
        scanf("%d",&b[i]);

    }
    merge(n1,n2,n3,a,b,c);

}
void merge(int n1,int n2,int n3,int a[],int b[],int c[])
{
    int i,k;
     for(i=1;i<=n1;i++)
    {
        c[i]=a[i];
    }
    n3=n1+n2;
    for(i=1,k=n1+1;i<=n2,k<=n3;i++,k++)
    {
        c[k]=b[i];
    }
    for(i=1;i<=n3;i++)
        printf("\n %d",c[i]);
}
