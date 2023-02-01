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
	printf("1.create circular Linked list\n");
	printf("2.Display circular Linked list\n");
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
		prev->next=head;
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
    do{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
	}
}


void delete_begin()
 {
     struct node *ptr=head;
     while(ptr->next!=head)
     {
         ptr=ptr->next;
     }
     struct node *p=head;
     head=head->next;
     ptr->next=head;
     free(p);
 }
 
void delete_end()
 {
     struct node *p=head;
     struct node *q=head->next;
     while(q->next!=head)
     {
         p=p->next;
         q=q->next;
     }
     p->next=head;
     free(q);
 }
void delete_middle()
 {
     struct node *p=head;
     struct node *q=head->next;
     int i;
     int index;
     printf("Enter Index:");
     scanf("%d",&index);
     for(i=0;i!=index-1;i++)
     {
         p=p->next;
         q=q->next;
     }
     p->next=q->next;
     free(q);
 }


