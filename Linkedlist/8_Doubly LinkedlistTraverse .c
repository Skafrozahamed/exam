#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL, *ptr;

void create();
void display();


void main()
{
	int value,ele,ch;
	printf("1.create doubly Linked list\n");
	printf("2.Display doubly Linked list\n");
    printf("3. exit \n");

	
	while(1)
	{
		printf("\nEnter the Choice:");
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
				      exit(0);
				}
		}
	}
void create()
{
	struct node* newnode,*temp;
	head=NULL;
	int choice;
	do
	{
		newnode=malloc(sizeof (struct node));
		printf("Enter data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
        
        }
        temp=newnode;
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
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    };
	}
}



