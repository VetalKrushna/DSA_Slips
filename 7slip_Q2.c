/*Q.2) Write a C program to check whether the contents of two stacks are identical. Use
stack library to perform basic stack operations. Neither stack should be changed.*/

#include<stdio.h>
#define MAX 10
typedef struct stack
{
    int a[MAX];
    int  top;
}stack;
stack *s;

void init(stack *s)
{
    s->top=-1;
}

int isfull(stack *s)
{
    if(s->top==MAX-1)
        return 1;
    else 
        return 0;    
}

int isempty(stack *s)
{
    if(s->top==-1)
        return 1;
    else 
        return 0;    
}

void push(stack *s,int num)
{
    if(isfull(s))
    {
        printf("\nStack is full...");
    }
    else
    {
        s->top++;
        s->a[s->top]=num;
    }
}

int pop(stack *s)
{
    if(isempty(s))
      printf("\nStack is empty......");

    else
    {
        int x=s->a[s->top];
        s->top--;
        return x;
    }  
}
void display(stack *s)
{
    while(!isempty(s))
    {
        printf("%d ",pop(s));
    }
}

int main()
{
    stack *s1,*s2;
    int i,n,a[10],b[10];
    char c1[10],c2[10];
    printf("Enter content for Ist stack:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter content for IIst stack:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0;c1[i]!='\0';i++)
    {
        push(&s1,c1[i]);
    }
    for(i=0;c2[i]!='\0';i++)
    {
        push(&s2,c1[i]);
    }

    while(!isfull(s1))
    {
        if(pop(&s1)!=pop(&s2))
        {
            printf("\nContent of stack are different...");
            break;
        }
    }
     if(isempty(s1))
     {
        printf("\nContent of stack are identical...");
     }
}