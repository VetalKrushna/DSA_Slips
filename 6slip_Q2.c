/*Q.2) Write a program that checks whether a string of characters is palindrome or not.
 The function should use a stack library (cststack.h) of stack of characters using
 a static implementation of the stack. */

 #include<stdio.h>
 #include"cststack.h"
int main()
{
    int i;
   
    char s1[100];
    printf("Enter string:");
    gets(s1);
     init ();
    for(i=0;s1[i]!='\0';i++)
    {
        push(s1[i]);
        
    }

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=pop())
        {
         break;
        }
    }
    if(isempty())
     printf("\nString is palindome");
    else
      printf("\nString is not palindome");
      
}