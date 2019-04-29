#include<stdio.h>
#include<conio.h>
int main()
{


    int i,j,cnt=0;
    char str[20],*ptr;
    printf("\n enter string=");
    scanf("%s",&str);
    ptr=&str[0];

    for(i=0;ptr[i]!='\0';i++)
    {
        while(!((ptr[i]>='a'&&ptr[i]<='z')||(ptr[i]>='A'&&ptr[i]<='Z' || ptr[i]=='\0')))
        {
            cnt++;
             //printf("\t r")
            printf("\n removed character=");

            printf(" %c",ptr[i]);
            for(j=i;ptr[j]!='\0';j++)
            {
                ptr[j]=ptr[j+1];
            }

        }
    }
    printf("\n string with alphabets=%s",str);
    printf("\n total removed charcater= %d",cnt);
}
