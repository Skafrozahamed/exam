#include<stdio.h>

int main()
{
    int n,i;
    printf("enter no of array element : ");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      int key;
    printf("Enter data you want find : ");
    scanf("%d",&key);
   int s=0;
   int e=n;
   while(s<=e)
   {
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
        printf("Found at position %d",mid+1);
        break;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
   }
   if(s>e)
   {
    printf("Not found %d",key);
   }
   return 0;

}