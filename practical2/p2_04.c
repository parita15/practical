#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev(char str[],int l1,char str3[]);
int main()
{
    char str[10],str3[10];
    int l1;
    printf("\n enter string=");
    scanf("%s",&str);
    strcpy(str3,str);
    l1=strlen(str);
    //printf("\n %d",l1);
    rev(str,l1,str3);
}
void rev(char str[],int l1,char str3[])
{

    char *ptr,a[20];
    int i,j,cnt=0;
    ptr=&str[l1];
    printf("\n");
    /*for(i=l1;i>=0;i--)
    {
        a[i]=*ptr;
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");
    /*for(i=l1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    for(i=0;i<=l1;i++)
    {
        printf("%c",str[i]);
    }*/
    for(i=l1,j=0;i>=1,j<l1;i--,j++)
    {

       // printf("\n%c",a[i-1]);
        if(a[i-1]==str[j])
           {
                cnt++;
            }
        else
           {
               cnt=0;
           }
    }
    if(cnt==l1)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }


}
