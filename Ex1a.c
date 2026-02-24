// C program to find sum of all elements in array using recursion
#include <stdio.h>

// Recursive function to find sum
int findsum(int arr[], int n)
{
    if (n <= 0)
        return 0;

    return arr[n - 1] + findsum(arr, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = findsum(arr, n);

    printf("Sum of all elements in array: %d", sum);

    return 0;
}