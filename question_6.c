#include <stdio.h>
#include <string.h>

// Define structure 
struct Student
{
    int roll;
    char name[50];
    float marks[4];
    float average;
};

//calculate average
float calculateAverage(float m[])
{
    float sum = 0;

    for(int i = 0; i < 4; i++)
    {
        sum += m[i];
    }

    return sum / 4;
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    //student information
    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 4 subjects:\n");
        for(int j = 0; j < 4; j++)
        {
            scanf("%f", &s[i].marks[j]);
        }

        s[i].average = calculateAverage(s[i].marks);
    }

    // Sort students by average
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(s[i].average < s[j].average)
            {
                struct Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    //top 3 students 
    printf("\nTop 3 Students:\n");

    for(int i = 0; i < 3 && i < n; i++)
    {
        printf("%s (Roll %d) - Average: %.2f\n",
               s[i].name, s[i].roll, s[i].average);
    }

    // failed students
    printf("\nFailed Students:\n");

    for(int i = 0; i < n; i++)
    {
        if(s[i].average < 40)
        {
            printf("%s (Roll %d) - Average: %.2f\n",
                   s[i].name, s[i].roll, s[i].average);
        }
    }

    // Search student 
    int search;
    printf("\nEnter roll to search: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == search)
        {
            printf("\nStudent Found\n");
            printf("Name: %s\n", s[i].name);
            printf("Average: %.2f\n", s[i].average);
        }
    }

    return 0;
}
