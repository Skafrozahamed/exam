#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of array element : ");
    scanf("%d",&n);
    int arr[20];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter data you want find : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf(" the data found at positon :%d",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not found");
    }
    return 0;
}