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
	printf("1.create circular Linked list\n");
	printf("2.Display circular Linked list\n");
	printf("3. Insert_begin \n");
	printf("4. Insert_end \n");
	printf("5. Insert_After_specified_element \n");
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
void insert_begin(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    ptr->data = data;
 
    struct node * p = head;
    while(p->next != head){
        p = p->next;
    }
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
 
}
void insert_end(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    ptr->data = data;
 
    struct node * p = head;
    while(p->next != head){
        p = p->next;
    }
 
    p->next = ptr;
    ptr->next = head;
 
}
void insert_middle(){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    int i=0,data;
    int pos;
    printf("Enter index and data :");
    scanf("%d %d",&pos,&data);
   //printf("Enter data:");
    //scanf("%d\n",&data);
   
    ptr->data = data;
    struct node * p = head;
    while(i!=pos-1){
        p = p->next;
        i++;
    }
    ptr->next =  p->next;
    p->next = ptr;
 
}


