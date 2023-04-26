#include <stdio.h>

#define ROWS_A 3
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 3

void matrix_multiply(int a[ROWS_A][COLS_A], int b[ROWS_B][COLS_B], int result[ROWS_A][COLS_B]);

int main() {
    int a[ROWS_A][COLS_A] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    int b[ROWS_B][COLS_B] = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};
    int result[ROWS_A][COLS_B];

    matrix_multiply(a, b, result);

    printf("Result:\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void matrix_multiply(int a[ROWS_A][COLS_A], int b[ROWS_B][COLS_B], int result[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
