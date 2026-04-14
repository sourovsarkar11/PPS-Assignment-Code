#include <stdio.h>
int main()
{
    int n;
    
    // Input the number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];      // student marks array
    int total = 0;     // total marks

    // Input marks of students and calculate total
    printf("Enter marks of students:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate class average
    float av = total / (float)n;

    // high and low marks array 
    int high = marks[0];
    int low = marks[0];

    // Determine highest and lowest marks
    for(int i = 1; i < n; i++)
    {
        if(marks[i] > high)
            high = marks[i];

        if(marks[i] < low)
            low = marks[i];
    }

    int above_avg = 0;

    // above avarage
    for(int i = 0; i < n; i++)
    {
        if(marks[i] > av)
            above_avg++;
    }

    // Display calculated statistics
    printf("\nClass Average: %.2f\n", av);
    printf("Highest Marks: %d\n", high);
    printf("Lowest Marks: %d\n", low);
    printf("Students above average: %d\n", above_avg);

    // Display histogram showing grade distribution
    printf("\nHistogram (Grade Distribution):\n");

    for(int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);

        // Print '*' symbols representing marks (1 star per 10 marks)
        for(int j = 0; j < marks[i] / 10; j++)
        {
            printf("*");
        }

        printf(" (%d)\n", marks[i]);
    }

    return 0;
}
