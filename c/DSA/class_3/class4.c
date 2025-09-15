#include <stdio.h>

int main() {
    int m, n;
    int matrix[10][10];
    int sparse[100][3];  // triplet array
    int i, j, k = 1;     // k = 1 because sparse[0] stores metadata

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;            // row index
                sparse[k][1] = j;            // col index
                sparse[k][2] = matrix[i][j]; // value
                k++;
            }
        }
    }

    // Store metadata
    sparse[0][0] = m;        // total rows
    sparse[0][1] = n;        // total cols
    sparse[0][2] = k - 1;    // total non-zero elements

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print sparse matrix (triplet form)
    printf("\nSparse Matrix (Triplet Representation):\n");
    for (i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
