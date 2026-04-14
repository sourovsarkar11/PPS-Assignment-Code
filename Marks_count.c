#include <stdio.h>

int main()
{
    char name[50];
    int roll,total = 0,fail = 0;
    int m[5];
    float avg;


    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &m[i]);
        total += m[i];

        if(m[i] < 40)
        {
            fail = 1;
        }
    }

    avg = total / 5.0;

    printf("\n===== RESULT SHEET =====\n");
    printf("Name : %s\n", name);
    printf("Roll : %d\n", roll);

    printf("Marks: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", m[i]);
    }

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

        if(avg >= 80)
            printf("Division : Distinction\n");
        else if(avg >= 60)
            printf("Division : First Division\n");
        else
            printf("Division : Second Division\n");
    }

    return 0;
}