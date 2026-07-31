#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student *ptr, *highest;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &(ptr + i)->roll);

        printf("Name: ");
        scanf("%s", (ptr + i)->name);

        printf("Marks: ");
        scanf("%f", &(ptr + i)->marks);
    }

    highest = ptr;

    for(i = 1; i < n; i++)
    {
        if((ptr + i)->marks > highest->marks)
        {
            highest = ptr + i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number : %d\n", highest->roll);
    printf("Name: %s\n", highest->name);
    printf("Marks: %.2f\n", highest->marks);

    free(ptr);

    return 0;
}
