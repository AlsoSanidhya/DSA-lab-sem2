//insertion at the beginning of the array
#include <stdio.h>

int main() {
    int n, x;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter element to insert at beginning: ");
    scanf("%d", &x);

    // Shift elements to the right
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at beginning
    arr[0] = x;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
