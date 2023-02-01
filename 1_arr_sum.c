#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum is %d",sum);
    return 0;
}