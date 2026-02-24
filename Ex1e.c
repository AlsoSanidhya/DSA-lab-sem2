//Find the product of two matrices using pointers.
#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    printf("Enter Matrix A (3x3):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (pA + i*3 + j));
        }
    }

    printf("Enter Matrix B (3x3):\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", (pB + i*3 + j));
        }
    }

    // Matrix Multiplication
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            int sum = 0;
            for(k = 0; k < 3; k++)
            {
                sum += (*(pA + i*3 + k)) * (*(pB + k*3 + j));
            }
            *(pC + i*3 + j) = sum;
        }
    }

    printf("Product Matrix C:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", *(pC + i*3 + j));
        }
        printf("\n");
    }

    return 0;
}
