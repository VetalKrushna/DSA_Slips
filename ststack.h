#include<stdio.h>
#define MAX 5
 struct stack
{
    int a[MAX];
    int top;
}s;

void init()
{
    s.top=-1;
}
int isempty()
{
    if(s.top==-1)
     return 1;
    else 
     return 0; 
}
int isfull()
{
    if(s.top==MAX-1)
      return 1;
    else
      return 0;  
}
void push(int num) 
{
    if(isfull(s))
     printf("\nStack is full\n");
    else
      {
        s.top++;
        s.a[s.top]=num;
        printf("\nPushed element:%d",s.a[s.top]);
      }
}

int pop()
{
    int val;
    if(isempty())
     printf("Stack is empty");
    else
     {
        val=s.a[s.top];
        s.top--;
        return val;
     } 
}