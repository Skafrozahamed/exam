#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to find memory location: ");
    scanf("%d",&x);
    printf("The memory location is %u",& arr[x+1]);
    return 0;
}