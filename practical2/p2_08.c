#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[20],temp,b[20],j,c;
    printf("\n enter size of atrray=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n enter a[%d]=",i);
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {

            if(i%2==0&&a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("\n %d",a[i]);
    }

}
