#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    // Accept the number of elements
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if(ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Display elements
    printf("\nThe entered elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}
