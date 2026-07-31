#include<stdio.h>
int main()
{
    int n,largest,smallest,sum;
    float average;
    int arr[50];
    printf("enter no of elements of array");
    scanf("%d",&n);
    printf("enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=smallest=average=sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
        if(arr[i]<smallest)
            smallest=arr[i];
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("largest no. is %d\n",largest);
    printf("smallest no.is %d\n",smallest);
    printf("average=%2f\n",average);
    return 0;
}
