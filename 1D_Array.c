#include <stdio.h>
int main()
{
    int n, i, j, temp;

    // Ask the user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Take input of array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array 
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Remove duplicate elements from the sorted array.
    printf("\nArray without duplicates:\n");

    for(i = 0; i < n; i++)
    {

        if(i == 0 || arr[i] != arr[i-1])
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
