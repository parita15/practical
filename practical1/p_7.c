
#include<stdio.h>
#include<conio.h>
#define rmaxsize 10
#define cmaxsize 20

void sum(int,int,int [][cmaxsize]);
int main()
{
    int a[rmaxsize][cmaxsize],i,j,rows,cols,ans;



        printf("\n enter number of rows=");
        scanf("%d",&rows);
        printf("\n enter number of columns=");
        scanf("%d",&cols);
        if(rows>rmaxsize && cols>cmaxsize)
        {
            printf("\n enter valid size ");
        }
        else
        {


    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("\n enter a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    sum(rows,cols,a);
    //printf("\n sum=%d",ans);

}
}
void sum(int rows,int cols,int a[][cmaxsize])
{
    int c,i,j;

    c=0;
    for(i=0;i<rows;i++)
    {

        for(j=0;j<cols;j++)
            {


            c=c+a[i][j];
            }

    }
    printf("\n total=%d",c);

}
