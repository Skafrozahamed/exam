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
void insert_begin();
void insert_end();
void insert_middle();


void main()
{
	int value,ele,ch;
    printf("1. create Singly Linked list\n");
	printf("2. Display Singly Linked list\n");
	printf("3. Insert at begin \n");
	printf("4. Insert at end \n");
	printf("5. Insert after specified element \n");
	printf("7. exit \n");
	
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
					insert_begin();
					display();
					break;
				}
				case 4:
				{
					insert_end();
					display();
					break;
				}	
				case 5:
					{
				
					insert_middle();
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


void insert_begin()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int data;
	printf("Enter the value: ");
	scanf("%d",&data);
	temp->data=data;
	temp->next=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insert_end()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int data;
	printf("Enter the value : ");
	scanf("%d",&data);
	temp->data=data;

	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=NULL;
	}
}

void insert_middle()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int data,pos;
	printf("Enter the value: ");
	scanf("%d",&data);
	printf("After which position you want to insert: ");
	scanf("%d",&pos);
	temp->data=data;
	if (head== NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		int i=0;
		while(i != pos-1)
		{
			ptr=ptr->next;
			i++;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
	
}

