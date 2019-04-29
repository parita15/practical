#include<stdio.h>
#include<conio.h>
void evenorodd(char *str)
{
    int n=atoi(str);
    if(n&1==1)
        printf("\n %d is odd",n);
    else
        printf("\n %d is even",n);

}
int main()
{
    char str[10];
    printf("\n enter string=");
    gets(str);
    evenorodd(str);
}
