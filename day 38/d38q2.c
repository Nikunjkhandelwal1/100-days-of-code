#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, isSymmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if(rows != cols) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is NOT Symmetric.\n");

    return 0;
}
