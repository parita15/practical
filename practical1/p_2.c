#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[15],*ptr,n,s;char *ch;
   // printf("\n enter size of array=");
    //scanf("%d",&n);
    for(i=0;i<15;i++)
    {
        printf("\n enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    ptr=a;
    //printf("\n size of=%d",sizeof(a));
    //printf("\n size of=%d",sizeof(ch));
    s=sizeof(a)/sizeof(a[0]);
    printf("\n %d",s);
    for(i=0;i<s;i++)
    {
        printf("\n a[%d]=%d",i,*ptr);
        ptr++;
    }
}
