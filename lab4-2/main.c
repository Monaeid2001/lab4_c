#include <stdio.h>
int main() {
  int row, col, a[60][60], b[60][60], sum[60][60], i, j;
  printf("enter the number of row\n");
  scanf("%d", &row);
  printf("enter the number of columns\n");
  scanf("%d", &col);

  printf("enter elements of first matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      scanf("%d", &a[i][j]);
    }
  printf("enter elements of second matrix:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("sum of two matrices\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == col - 1) {
        printf("\n\n");
      }
    }
  return 0;
}
