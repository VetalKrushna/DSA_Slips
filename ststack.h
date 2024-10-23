#include<stdio.h>
#define MAX 5
typedef struct stack
{
    int a[MAX];
    int top;
}stack;

stack *s;
void init(stack *s)
{
    s->top=-1;
}
int isempty(stack *s)
{
    if(s->top==-1)
     return 1;
    else 
     return 0; 
}
int isfull(stack *s)
{
    if(s->top==MAX-1)
      return 1;
    else
      return 0;  
}
void push(stack *s,int num) 
{
    if(isfull(s))
    {
     printf("\nStack is full\n");
    }
    else
      {
        s->top++;
        s->a[s->top]=num;
        printf("\nPushed element:%d",s->a[s->top]);
      }
}

int pop(stack *s)
{
    int val;
    if(isempty(s))
    {
     printf("Stack is empty");
    }
    else
     {
        val=s->a[s->top];
        s->top--;
        return val;
     } 
}

int peek(stack *s)
{
  if(isempty(s))
    {
     printf("Stack is empty");
    }
    else
     {
      return s->a[s->top];
     }
}