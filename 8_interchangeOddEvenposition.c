#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("Interchange the odd and even position of array element are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}