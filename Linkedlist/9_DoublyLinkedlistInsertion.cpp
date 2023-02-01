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
void insert_begin();
void insert_end();
void insert_middle();



void main()
{
	int value,ele,ch;
    printf("1.create doubly  Linked list\n");
	printf("2.Display doubly  Linked list\n");
	printf("3. Insert at begin \n");
	printf("4. Insert at end \n");
	printf("5. Insert After specified element \n");
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

  void insert_begin(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    ptr->data = data;
    ptr->prev=NULL;
    ptr->next=head;
    head=ptr;
    
}
    
void insert_end(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    ptr->data = data;
 
    struct node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    
    ptr->next = NULL;
    ptr->prev=p;
    p->next = ptr;
 
}

void insert_middle(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int i=0,data;
    int pos;
     printf("Enter index and data :");
    scanf("%d %d",&pos,&data);
   
    ptr->data = data;
    struct node * p = head;
    while(i!=pos-1){
        p = p->next;
        i++;
    }
    ptr->next =  p->next;
    p->next->prev=ptr;
    ptr->prev=p;
    p->next = ptr;
}

