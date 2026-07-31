#include<stdio.h>
int main()
{
     int n;
    int arr[50];
    printf("enter no of elements of array");
    scanf("%d",&n);
    printf("enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array in reverse order\n");
    for(int i=n-1;i>=0;i--)
        printf("%d",arr[i]);
    return 0;
}
