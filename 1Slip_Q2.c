/*Q.2) Write a program that sorts the elements of linked list using any of sorting
technique.*/

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

void sort(NODE*head)
{
    int t;
    NODE *i,*j;
    NODE *temp;
     for(i=head;i!=NULL;i=i->next)
     {
        for(j=head;j!=NULL;j=j->next)
        {
            if((i->data)<(j->data))
            {
                t=i->data;
                i->data=j->data;
                j->data=t;
            }
        }
     }
     display(head);
}
int main()
{
    int ch;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Sorting\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    break;

            case 3:printf("\nSorted Linkedlist Elements:");
                    sort(head);
                    break;
                    
        }
    }while(ch!=4);
}
