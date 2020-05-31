#include<stdio.h>
#include<math.h>
void main()
     {
        int copy,n,armstrong,r;
        printf("enter a number\n");
        scanf("%d",&n);
        copy=n;
        while(n>0)
            {
               r=(n%10)*(n%10)*(n%10);
               armstrong=armstrong+r;
               n=n/10;
            }
        if(armstrong==copy)
            {
               printf("the given number is armstrong");
            }
         else
           {
              printf("the given number is not armstrong");
           }
     }      
