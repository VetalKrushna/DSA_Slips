#include<stdio.h>
#define MAX 15
struct stack
{
    char a[MAX];
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
void push(char c) 
{
    if(isfull())
     printf("\nStack is full\n");
    else
      {
        s.top++;
        s.a[s.top]=c;
      }
}
char pop()
{
  char val;
    if(isempty())
     printf("Stack is empty");
    else
     {
        val=s.a[s.top];
        s.top--;
        return val;
     } 
}
