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
void delete_begin();
void delete_end();
void delete_middle();



void main()
{
	int value,ele,ch;
    printf("1. create Singly Linked list\n");
	printf("2. Display Singly Linked list\n");
	printf("3. Delete at begin \n");
	printf("4. Delete at end \n");
	printf("5. Delete after specified element \n");
	printf("6. exit \n");
	
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
					{
					delete_begin();
					display();
					break;
				}
				case 4:
				{
					delete_end();
					display();
					break;
				}
				case 5:
				{
				
					delete_middle();
					display();
					break;
				}
				case 6:
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


void delete_begin()
{
	if (head== NULL)
	{
		printf("List if Empty, Deletion is not Possible");
	}
	else
	{
		ptr=head;
		head=head->next;
		ptr->next=NULL;
		free(ptr);
	}
}
void delete_end()
{
	if (head== NULL)
	{
		printf("List if Empty, Deletion is not Possible");
	}
	else
	{
		struct node *p; 
		ptr=head;
		while(ptr->next != NULL)
		{
		p=ptr;
		ptr=ptr->next;	
		}
		p->next=NULL;
		free(ptr);
	}
}

void delete_middle()
{
	if (head== NULL)
	{
		printf("List if Empty, Deletion is not Possible");
	}
	else
	{
		struct node *p; 
		int pos;
		int i=1;
		ptr=head;
		printf("Enter the position you want to delete: ");
		scanf("%d",&pos);
		while(i != pos-1)
		{
			ptr=ptr->next;
			i++;
		}
		p=ptr->next;
		ptr->next=p->next;
		free(p);
	}
}


