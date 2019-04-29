#include<stdio.h>
#include<conio.h>
void callbyval(int,int);
void callbyref(int *,int *);
int main()
{
    int x,y,*ptr,*p;
    printf("\n enter value for x=");
    scanf("%d",&x);
    printf("\n enter value for y=");
    scanf("%d",&y);

    callbyval(x,y);
 //   printf("\n val of x=%d \t y=%d",x,y);
    callbyref(&x,&y);
  //  printf("\n val of x=%d \t y=%d",x,y);

}
void callbyval(int a,int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
       printf("\n x=%d y=%d",a,b);


}

void callbyref(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n x=%d y=%d",*a,*b);
}
