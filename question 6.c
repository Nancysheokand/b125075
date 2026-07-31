#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s)
{
    printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
}

int main()
{
    struct Student s;
    int i;

    printf("Roll No\tName\tMarks\n");

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter details of Student %d\n", i);

        printf("Roll Number: ");
        scanf("%d", &s.roll);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Marks: ");
        scanf("%f", &s.marks);

        display(s);
    }

    return 0;
}
