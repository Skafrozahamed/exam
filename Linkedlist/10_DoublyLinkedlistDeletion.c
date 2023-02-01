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
void delete_begin();
void delete_end();
void delete_middle();



void main()
{
	int value,ele,ch;
	printf("1.create doubly Linked list\n");
	printf("2.Display doubly Linked list\n");
	printf("3. Delete at begin \n");
	printf("4. Delete at end \n");
	printf("5. delete_After_specified_element \n");
    printf("6. exit \n");

	
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

void delete_begin()
 {
     struct node *ptr=head;
     head=head->next;
     ptr->next=NULL;
     head->prev=NULL;
     free(ptr);
 }
 void delete_end()
 {
     struct node *p=head;
     struct node *q=head->next;
     while(q->next!=NULL)
     {
         p=p->next;
         q=q->next;
     }
     q->prev=NULL;
     p->next=NULL;
     free(q);
 }
 void delete_middle()
 {
     struct node *p=head;
     struct node *q=head->next;
     int pos;
     printf("Enter index no:");
     scanf("%d",&pos);
     int i;
     for(i=0;q->next<pos-1;i++)
     {
         p=p->next;
         q=q->next;
         
     }
     p->next=q->next;
     q->next->prev=p->next;
     q->next=NULL;
     q->prev=NULL;
     free(q);
 }



