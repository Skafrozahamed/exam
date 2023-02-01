#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no of array element: ");
    scanf("%d",&n);
    int arr[20];
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j;
    for(i=0;i<n-1;i++)
    {
       int  flag=0;
       for(j=0;j<n-1-i;j++)
       {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
       }
       if(flag==0)
       {
        break;
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}