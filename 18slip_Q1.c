/*Q.1) Write a c program that search a number in integers array using binary search
algorithm. */

#include<stdio.h>
int main()
{
    int a[100],i,n,num;
    int begin,end,mid;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter n numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&num);
    begin=0;
   end=n-1;
    while(begin<=end)
    {
        mid=begin+end/2;

        if(a[mid]==num)
        {
            printf("\nNumber found");
            break;
        }

        else if(a[mid]<num)
        {
            begin=mid+1;
        }
        else if(a[mid]>num)
        {
            end=mid-1;
        }
    }
    if(num!=a[mid])
    {
        printf("\nNumber not found..");
    }
}
