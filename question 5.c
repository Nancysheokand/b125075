#include<stdio.h>
int main()
         {
             int n,arr[100],i,sum=0;
             int *ptr;

             printf("enter no. of elements:");
             scanf("%d",&n);
             printf("enter elements:\n");
             for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);

             ptr=arr;

             for(int i=0;i<n;i++)
                sum+=*(ptr+i);

             printf("sum=%d",sum);
             return 0;
         }
