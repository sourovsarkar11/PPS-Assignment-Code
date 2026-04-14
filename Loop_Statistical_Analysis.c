#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    int total = 0;

    printf("Enter marks of students:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    float av = total / (float)n;

    int high = marks[0];
    int low = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(marks[i] > high)
            high = marks[i];

        if(marks[i] < low)
            low = marks[i];
    }

    int above_avg = 0;
    for(int i = 0; i < n; i++)
    {
        if(marks[i] > av)
            above_avg++;
    }

    printf("\nClass Average: %.2f\n", av);
    printf("Highest Marks: %d\n", high);
    printf("Lowest Marks: %d\n", low);
    printf("Students above average: %d\n", above_avg);

    printf("\nHistogram (Grade Distribution):\n");

    for(int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        for(int j = 0; j < marks[i] / 10; j++)
        {
            printf("*");
        }
        printf(" (%d)\n", marks[i]);
    }

    return 0;
}
