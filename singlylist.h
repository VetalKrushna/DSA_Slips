#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node  *next;
}NODE;

NODE* create(NODE*head)
{
    int i,n;
    NODE*temp,*newnode;
    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        printf("Enter value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
          temp=head=newnode;

        else
        {
            temp->next=newnode;
            temp=newnode;
        }  
    }
    return head;
}

void display(NODE* head)
{
    NODE* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void reverse(NODE*head)
{
    NODE *current,*prev,*next;

    prev=head;
    current=head->next;
    
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;
    }
    head->next=NULL;
    head=prev;

    printf("\nReverse linked list:");
    display(head);
}