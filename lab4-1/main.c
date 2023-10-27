#include <stdio.h>
int main() {
    int rows, cols;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("enter the elements :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("average of each column:\n");
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        double average = (double)sum / rows;
        printf("column %d: %f\n", j + 1, average);
    }
  return 0;
}
