#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j;
    printf("Enter array element of no1 : ");
    scanf("%d",&n1);
    int arr1[10], arr3[20],arr2[10];
     for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }


    printf("Enter array element of no2 : ");
    scanf("%d",&n2);
     for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    n3=(n1+n2) ;
    for(i=0;i<n1;i++)
    {
        arr3[j]=arr1[i];
        j++;
    }

    for(i=0;i<n2;i++)
    {
        arr3[j]=arr2[i];
        j++;
    }



    for(i=0;i<n3-1;i++)
    {
       int  flag=0;
       for(j=0;j<n3-1-i;j++)
       {
        if(arr3[j]>arr3[j+1])
        {
            int temp=arr3[j];
            arr3[j]=arr3[j+1];
            arr3[j+1]=temp;
            flag=1;
        }
       }
       if(flag==0)
       {
        break;
       }
    }



    for(j=0;j<n3;j++)
    {
        printf("%d ",arr3[j]);
    }


}