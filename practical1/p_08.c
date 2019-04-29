#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20];
    int l,b,i,cnt=0;
    printf("\n enter string=");
    gets(a);
    b=strlen(a);
    printf("\n length=%d",b);
    for(i=0;i<b;i++)
    {
        if(a[i] != a[b-i-1]){
            cnt= 1;
            break;
   }
}
    if(cnt>0)
    {
        printf("\n%s is not a palindrome", a);
    }
    else
    {
        printf("\n%s is a palindrome", a);
    }
    //return 0;
}



