#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char str[],int l1);
int main()
{
    char str[10];
    int l1;
    printf("\n enter string=");
    scanf("%s",&str);
    l1=strlen(str);
//    printf("\n %d",l1);
    rev(str,l1);


}
void rev(char str[],int l1)
{

    char *ptr;
    int i;
    //printf("\n length=%d",l1);
    ptr=&str[l1];
    printf("\n reverse string=");
    for(i=l1;i>=0;i--)
    {
        printf("%c",*ptr);
        ptr--;
    }
}
