#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int l1,l2,i,j,count=0,count1=0;
    char str[20],str1[20];
    printf("\n enter string=");
    scanf("%[^\n]",str);
    l1=strlen(str);
    printf("\n enter string you want to search=");
    scanf("%s",&str1);
    l2=strlen(str1);
    for(i=0;i<=l1;)
    {
        j=0;
        count=0;

      while((str[i] == str1[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }
    printf(" %d times",count1);
}
