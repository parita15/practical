#include <stdio.h>

void binary_search(int [], int, int, int);
int main()
{
    int s, size, i;
    int list[25];

    printf("Enter size of a list: ");
    scanf("%d", &size);
    printf("Enter elements\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Enter key to search\n");
    scanf("%d", &s);
    binary_search(list, 0, size, s);

}
void binary_search(int list[], int lower, int high, int s)
{
    int mid;

    if (lower>high)
    {
        printf("Key not found\n");
        return;
    }
    mid=(lower+high)/2;
    if (list[mid]==s)
    {
        printf("Key found at %d\n",mid);
    }
    else if (list[mid]>s)
    {
        binary_search(list, lower, mid - 1, s);
    }
    else if (list[mid] < s)
    {
        binary_search(list, mid + 1, high, s);
    }
}
