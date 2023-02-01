#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *ptr;

void create();
void display();
void MAX();



void main()
{
	int value,ele,ch;
    printf("1. create Singly Linked list\n");
	printf("2. Display Singly Linked list\n");
	printf("3. Maximum element \n");
	printf("4. exit \n");
	
	while(1)
	{
		printf("\nEnter the Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
		    case 1:
					create();
					break;
			case 2:
					display();
					break;		
		    case 3:
					MAX();
					break;

				case 4:
				      exit(0);
				}
		}
	}
	
void create()
{
	struct node *prev,*p;
	head=NULL;
	int choice;
	do
	{
		p=malloc(sizeof(struct node));
		printf("Enter data :");
		scanf("%d",&p->data);
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			prev->next=p;
		}
		prev=p;
		printf("Do you want to continue(0,1)?");
		scanf("%d",&choice);
	}while(choice);
}

void display()
{
	if (head== NULL)
	{
		printf("List if Empty");
	}
	else
	{
		ptr=head;
		while( ptr != NULL)
		{
			printf("%d  ", ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
}


void MAX()
{
    ptr=head;
    int max;
    max=ptr->data;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        if(ptr->data>max)
        {
            max=ptr->data;
        }
        
    }
    printf("The max is : %d\n",max);
    
}

