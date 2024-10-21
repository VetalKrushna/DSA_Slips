#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node  *next,*prev;
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
        newnode->next=newnode->prev=NULL;

        if(head==NULL)
          temp=head=newnode;

        else
        {
            temp->next=newnode;
            newnode->prev=temp;
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