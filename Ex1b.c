#include <stdio.h>

int main()
{
    int a[100];
    int n, i, pos, value, del;

    // Enter number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Enter array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // INSERTION
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if(pos >= 1 && pos <= n+1)
    {
        for(i = n; i >= pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1] = value;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid position for insertion\n");
    }

    printf("\n");

    // DELETION
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &del);

    if(del >= 1 && del <= n)
    {
        for(i = del-1; i < n-1; i++)
        {
            a[i] = a[i+1];
        }
        n--;

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid position for deletion\n");
    }

    return 0;
}