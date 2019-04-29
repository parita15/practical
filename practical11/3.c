#include<stdio.h>
#include<conio.h>


void bubbleSort(int a[], int n)
{
    int i, temp;
    if (n > 0)
    {
        for (i=1; i<n; i++)
        {
            if (a[i-1]>a[i])
            {
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }

            bubbleSort(a,n-1);
    }
}

int main()
{
    int i, n, a[20];
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("\nEnter elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf(" After  Sort:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
  }
