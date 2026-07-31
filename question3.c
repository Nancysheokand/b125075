#include<stdio.h>
int main()
         {
           int n,i,arr[50],found=0;
           printf("enter no. of elements:");
           scanf("%d",&n) ;
           printf("enter elements;\n");
           for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
           printf("eter elements to search:");
           scanf("%d",&key);
           for(int i=0;i<n;i++)
           {
               if(arr[i]==key)
               {
                   printf("element found at positiion",i+1);
                   found=1;
                   break;
               }
           }
           if(found=0)
            printf("element not found");
           return 0;
         }
