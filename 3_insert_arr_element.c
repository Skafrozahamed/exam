#include<stdio.h>

int insert_begin( int a[],int item,int x);
int insert_end( int a[],int item,int x);
int insert_anyposition( int a[],int item,int x);

int main()
{
    int i,n,item;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n++;
    printf("Enter data: ");
    scanf("%d",&item);

    int ch;
	printf("1. Insert at begin \n");
	printf("2. Insert at end \n");
	printf("3. Insert after specified element \n");
	printf("4. exit \n");
    while(1)
	{
		printf("\nEnter the Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
				{
					insert_begin(arr, item,n);
					break;
				}
				case 2:
				{
					insert_end(arr,item,n);
					break;
				}	
				case 3:
					{
				
					insert_anyposition(arr,item,n);
					break;
					}
				case 4:
                {
				      exit(0);
				}
		}
        return 0;
	}

}


int insert_begin( int a[],int item,int x)
{
    int i;
    for(i=x;i>1;i--)
    {
        a[i-1]=a[i-2];
    }
    a[0]=item;
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}


int insert_end( int a[],int item,int x)
{
    a[x-1]=item;
    int i;
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


int insert_anyposition( int a[],int item,int x)
{
    int i,pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    for(i=x;i>pos;i--)
    {
        a[i-1]=a[i-2];
    }
    a[pos-1]=item;
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}