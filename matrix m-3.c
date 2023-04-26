#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
  int matrixA[ROWS][COLS] = {{1, 2},{5,3}};
  int matrixB[ROWS][COLS] = {{2,3}, {4,1}};
  int resultMatrix[ROWS][COLS];
 
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
    }
  }
  
  printf("Result Matrix:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", resultMatrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
