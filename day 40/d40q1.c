#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Print upper half including main diagonal
    for(int startCol = 0; startCol < cols; startCol++) {
        int i = 0, j = startCol;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Print lower half
    for(int startRow = 1; startRow < rows; startRow++) {
        int i = startRow, j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
