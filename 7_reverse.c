#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The reverse of array element are: ");
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}