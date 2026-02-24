//Sum of Rows and Columns of Matrix
#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Row Sum
    printf("\nRow sums:\n");
    for(i = 0; i < rows; i++)
    {
        int rowsum = 0;
        for(j = 0; j < cols; j++)
        {
            rowsum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowsum);
    }

    // Column Sum
    printf("\nColumn sums:\n");
    for(j = 0; j < cols; j++)
    {
        int colsum = 0;
        for(i = 0; i < rows; i++)
        {
            colsum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, colsum);
    }

    return 0;
}