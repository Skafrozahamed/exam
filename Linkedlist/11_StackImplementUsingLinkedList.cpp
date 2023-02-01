#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void push();
void pop();
void peek();
void display();

int main()
{
    int ch;
    printf("\n 1.PUSH \n 2.POP\n 3.PEEK\n 4.DISPLAY \n 5.EXIT");
    do
    {
        printf("\nEnter the choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :push();
                    break;
            case 2:pop();
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
void push()
{

        int val;
        printf("\nEnter the element:");
        scanf("%d",&val);
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=head;
        head=newnode;
}
void pop()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("pop element is: %d",head->data);
        temp=head;
        head=head->next;
        free(temp);
    }
}
void peek()
{
    if(head==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("peek element is: %d",head->data);
    }
}
void display()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("stack is empty");
    } 
    else
    {
        printf("Stack element are:");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
}

