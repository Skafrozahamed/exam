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

    int max1,max2,temp;
    max1=arr[0];
    max2=arr[1];

    if(max2>max1)
    {
        temp=max1;
        max1=max2;
        max2=temp;
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2)
        {
            max2=arr[i];
        }
        
    }
    printf("The first lsrgest and second largest element are %d %d ",max1, max2);
    return 0;
}