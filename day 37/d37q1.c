#include <stdio.h>

int main() {
    int matrix[10][10], rowSum[10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i, rowSum[i]);
    }

    return 0;
}
