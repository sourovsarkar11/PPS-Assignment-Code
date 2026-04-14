#include <stdio.h>
int main()
{
    // Variable declarations
    char name[50];          // student's name
    int roll;               // roll number
    int total = 0;          // total marks
    int fail = 0;           // check if student failed any subject
    int m[5];               // array to store marks of 5 subjects
    float avg;              // average marks

    // student name as input
    printf("Enter student name: ");
    scanf("%s", name);

    // roll number as input
    printf("Enter roll: ");
    scanf("%d", &roll);

    // marks of 5 subjects
    printf("Enter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &m[i]);     // Input marks
        total += m[i];          // Add to total

        // Check if any subject mark is below 40
        if(m[i] < 40)
        {
            fail = 1;           // mark as fail
        }
    }

    // calculate average
    avg = total / 5.0;

    // output result sheet
    printf("\n===== RESULT SHEET =====\n");
    printf("Name : %s\n", name);
    printf("Roll : %d\n", roll);

    // display marks
    printf("Marks: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", m[i]);
    }

    // Display total and average
    printf("\nTotal Marks : %d\n", total);
    printf("Average Marks : %.2f\n", avg);

    if(fail == 1 || avg < 50)
    {
        printf("Result : FAIL\n");
        printf("Division : Fail\n");
    }
    else
    {
        printf("Result : PASS\n");

        // Determine division based on average
        if(avg >= 80)
            printf("Division : Distinction\n");
        else if(avg >= 60)
            printf("Division : First Division\n");
        else
            printf("Division : Second Division\n");
    }

    return 0;
}
