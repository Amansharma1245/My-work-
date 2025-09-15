#include <stdio.h>

#define MAX 10

typedef struct {
    int data[MAX][MAX];
    int rows;
    int cols;
} Matrix;

void inputMatrix(Matrix *mat) {
    for (int i = 0; i < mat->rows; i++) {
        for (int j = 0; j < mat->cols; j++) {
            scanf("%d", &mat->data[i][j]);
        }
    }
}

void displayMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.cols; j++) {
            printf("%d\t", mat.data[i][j]);
        }
        printf("\n");
    }
}

Matrix multiplyMatrix(Matrix a, Matrix b) {
    Matrix result;
    result.rows = a.rows;
    result.cols = b.cols;
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < a.cols; k++) {
                result.data[i][j] += a.data[i][k] * b.data[k][j];
            }
        }
    }
    return result;
}

int main() {
    Matrix A, B, C;
    scanf("%d%d", &A.rows, &A.cols);
    scanf("%d%d", &B.rows, &B.cols);

    if (A.cols != B.rows) {
        printf("Invalid dimensions\n");
        return 0;
    }

    inputMatrix(&A);
    inputMatrix(&B);

    C = multiplyMatrix(A, B);

    displayMatrix(C);

    return 0;
}
