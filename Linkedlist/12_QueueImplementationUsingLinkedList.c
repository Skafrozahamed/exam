#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueu();
void dequeu();
void peek();
void display();

int main()
{
    int ch;
    printf("\n 1.enqueu \n 2.dequeu\n 3.PEEK\n 4.DISPLAY \n 5.EXIT");
    do
    {
        printf("\nEnter the choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :enqueu();
                    break;
            case 2:dequeu();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:printf("End the program");
                   break;
            default:printf("\n Choose correct option");
        }
    }while(ch!=5);
    return 0;
}
void enqueu()
{

        int val;
        printf("\nEnter the element:");
        scanf("%d",&val);
        struct node *newnode=malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;
        if(front==NULL&&rear==NULL)
        {
            front=rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
}
void dequeu()
{
    struct node *temp;
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("dequeu element is: %d",front->data);
        front=front->next;
        free(temp);
    }
}
void peek()
{
   
   if(front==NULL&&rear==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("peek element is: %d",front->data);
    }
}
void display()
{
    struct node *temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    } 
    else
    {
        printf("queue element are:");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
}

