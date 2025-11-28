#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols;
    int diag[10], k = 0, isDistinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if(rows != cols) {
        printf("Not a square matrix — diagonal check not applicable.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for(int i = 0; i < rows; i++) {
        diag[k++] = matrix[i][i];
    }

    // Check distinctness using comparison
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++) {
            if(diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    if(isDistinct)
        printf("All diagonal elements are DISTINCT.\n");
    else
        printf("Diagonal elements are NOT DISTINCT.\n");

    return 0;
}
