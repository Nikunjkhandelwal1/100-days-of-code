#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if(rows != cols) {
        printf("Not a square matrix — main diagonal sum applies only to square matrices.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        sum += matrix[i][i];  // main diagonal condition: row index = column index
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
