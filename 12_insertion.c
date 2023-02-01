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
    for(i=1;i<n;i++)
    {
       int temp=arr[i];
       j=i-1;
       while (j>=0&&arr[j]>temp)
       {
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=temp;
       
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}