#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no of array element: ");
    scanf("%d",&n);
    int arr[60];
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        } 
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}