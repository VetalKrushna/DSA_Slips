/*Q.1) Sort a random array of n integers (accept the value of n from user) in ascending
 order by using count sort algorithm.*/

#include<stdio.h>
#include<stdlib.h>

void countsort(int a[],int max,int n)
{
    int i,c[max+1];
    int b[100];

    for(i=0;i<=max;i++)   // Initialize count array with all zeros 
    {
        c[i]=0;
    }

    for(i=0;i<n;i++)
    {
        c[a[i]]=c[a[i]]+1;
    }

    for( i=1 ; i<=max ;i++ )
    {
        c[i]=c[i]+c[i-1];
    }
    
    for( i=n-1 ; i>=0 ; i-- )
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }

     for(i=0; i<n; i++) 
     {  
      a[i]=b[i]; //store the sorted elements into main array  
     }  

    printf("\nSorted array:");
    for(i=0;i<n;i++)
          {
              printf("%d ",a[i]);
          }
}

 int main()
 {
    int *a,i,n,max;
    printf("Enter limit:");
    scanf("%d",&n);
    
    a=(int *)malloc(n*sizeof(int));

    printf("\nEnter array:");
      for(i=0;i<n;i++)
          {
              scanf("%d",&a[i]);
          }

          printf("\nMain Array:");
           for(i=0;i<n;i++)
          {
              printf("%d ",a[i]);
          }

    max=a[0];

          for(i=0;i<n;i++)
          {
            if(a[i]>max)
            {
                max=a[i];
            }
          }
     countsort(a,max,n);
 }