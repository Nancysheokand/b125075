#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, maxIndex;
    float total = 0, average;


    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    maxIndex = 0;


    for(i = 0; i < 5; i++)
    {
        total = total + s[i].marks;

        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    average = total / 5;

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number : %d\n", s[maxIndex].roll);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
