#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of first matrix (3x3):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix (3x3):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result matrix
    printf("\nResult Matrix (Multiplication):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    //identity matrix check
    int identity = 1;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if((i == j && C[i][j] != 1) || (i != j && C[i][j] != 0))
            {
                identity = 0;
            }
        }
    }

    if(identity == 1)
        printf("\nThe result matrix is an Identity Matrix\n");
    else
        printf("\nThe result matrix is NOT an Identity Matrix\n");

    // Calculate sum of upper and lower triangle
    int upper_sum = 0, lower_sum = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i <= j)
                upper_sum += C[i][j];

            if(i >= j)
                lower_sum += C[i][j];
        }
    }

    printf("Sum of Upper Triangle = %d\n", upper_sum);
    printf("Sum of Lower Triangle = %d\n", lower_sum);

    return 0;
}
