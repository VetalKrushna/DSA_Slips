/*Q.2)Write a program that add two single variable polynomials.Each polynomial should be
represented as a list with linked list implementation.
*/

#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node))
typedef struct node
{
    int coef,pow;
    struct node *next;
}NODE;

NODE *create(NODE*head)
{
    int i,n;
    NODE *temp,*newnode;
    printf("\nEnter number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=memory;
         printf("Enter coefficient and power:");
         scanf("%d%d",&newnode->coef,&newnode->pow);
         newnode->next=NULL;

         if(head==NULL)
         {
            temp=head=newnode;
         }
         else
         {
            temp->next=newnode;
            temp=newnode;
         }
    }
    return head;
}

void display(NODE *head)
{
    NODE* temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%dx^%d+",temp->coef,temp->pow);
    }
}

NODE *add(NODE* head1,NODE* head2,NODE* head3)
{
    int i;
    NODE *temp1=head1,*temp2=head2,*newnode,*temp3;

        while(temp1!=NULL && temp2!=NULL)
        {
            newnode=memory;
            if((temp1->pow)>(temp2->pow))
            {
                newnode->coef=temp1->coef;
                newnode->pow=temp1->pow;
                temp1=temp1->next;
            }
            else if((temp1->pow)<(temp2->pow))
            {
                newnode->coef=temp2->coef;
                newnode->pow=temp2->pow;
                temp2=temp2->next;
            }

            else
            {
                newnode->coef=temp1->coef+temp2->coef;
                newnode->pow=temp2->pow;
                 temp1=temp1->next;
                temp2=temp2->next;
            }

            if(head3==NULL)
            {
                temp3=head3=newnode;
            }
            else
            {
                temp3->next=newnode;
                temp3=newnode;
            }
        }
        display(head3);
}

int main()
{
    NODE*head1=NULL,*head2=NULL,*head3=NULL;

    printf("Enter first polynomial:");
    head1=create(head1);

    printf("Enter second polynomial:");
    head2=create(head2);

    printf("\nIst polynomial are:");
    display(head1);
    printf("\nIInd polynomial are:");
    display(head2);

printf("\n\nAddition of two polynomial:");
    add(head1,head2,head3);
}