#include<stdio.h>
#include<conio.h>
void rotateArray(int a[],int d,int n);
int main()
{
    int i,a[20],n,d,temp[10],j,cnt,c;
    printf("\n enter size of array=");
    scanf("%d",&n);
    printf("\n enter d=");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
    printf("\n enter a[%d]=",i);
    scanf("%d",&a[i]);
    }
    rotateArray(a,d,n);
}
void rotateArray(int a[],int d,int n)
{
    int i,cnt,temp[20],c;
    temp[0] = a[0];

    cnt=0;
    for(i = 0; i <n-d; i++)
    {
        a[i] = a[i+d];
       printf("\n %d",a[i]);

    }
            c=n-d;
            for(i=c,cnt=0;i<n;i++)
            {
                a[i]=temp[cnt];
                printf("\n %d",a[i]);
                 temp[cnt]++;
            }

    }
