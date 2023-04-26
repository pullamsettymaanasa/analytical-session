#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int i, j, size, sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The diagonal elements of the matrix are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");
    printf("The sum of the diagonal elements is %d\n", sum);

    return 0;
}
