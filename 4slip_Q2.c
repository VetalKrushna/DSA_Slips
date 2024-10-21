/*Q1. Read the ‘n’ numbers from user and sort using bubble sort.*/

#include<stdio.h>
int main()
{
    int i,n,p,a[100],t;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter n numbers:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     for(p=1;p<n;p++)
     {
        for(i=0;i<n-p;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
     }
     printf("\nSorted array:");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}