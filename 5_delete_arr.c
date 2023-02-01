#include<stdio.h>

int delete_begin( int a[],int n);
int delete_end( int a[],int n);
int delete_anyposition( int a[],int n);

int main()
{
    int i,n;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    int arr[50];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    n--;

    int ch;
	printf("1. delete at begin \n");
	printf("2. delete at end \n");
	printf("3. delete after specified element \n");
	printf("4. exit \n");
    while(1)
	{
		printf("\nEnter the Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
				{
					delete_begin(arr, n);
					break;
				}
				case 2:
				{
					delete_end(arr,n);
					break;
				}	
				case 3:
					{
				
					delete_anyposition(arr,n);
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


int delete_begin( int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}


int delete_end( int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


int delete_anyposition( int a[],int n)
{
    int i,pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}