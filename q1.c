//insertion at the given position
#include <stdio.h>

int main() {
    int arr[100], pos, i, n, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the new element: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right to make space for the new element
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos - 1] = value;
    n++; // Increment the number of elements

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}