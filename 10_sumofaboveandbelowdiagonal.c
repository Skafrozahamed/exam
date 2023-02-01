#include<stdio.h>
int main()
{
  int arr[20][20],i,j,s,n;
  printf("Enter no of row and columns in amatrix: ");
  scanf("%d",&n);
  printf("Enter element of matrix.....\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        printf("Enter element of pocket [%d][%d]\t" ,i,j);
        scanf("%d",&arr[i][j]);
    }
  }


  printf("Matrix \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }

 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i!=j)
      {
        s=s+arr[i][j];
      }
    }
  }
  printf("Diagonal sum of Matrix are : %d ",s);
}