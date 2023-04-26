#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    float matrix[50][50];
    float sum = 0, average;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%f", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    average = sum / (rows * cols);

    printf("\nThe sum of all elements in the matrix is: %.2f\n", sum);
    printf("The average of all elements in the matrix is: %.2f\n", average);

    return 0;
}
