#include <stdio.h>

void matrixmult(int *A, int *B, int *C, int m, int n, int p) 
{
	int i ,j ,k ;
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < p; j++) {
            *(C + i * p + j) = 0; 
            for ( k = 0; k < n; k++) {
                *(C + i * p + j) += *(A + i * n + k) * *(B + k * p + j);
            }
        }
    }
}

void matrixprt (int *matrix, int rows, int cols) 
{
	int i ,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
    int B[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int C[3][3];

    int m = 3; // Rows of matrix A
    int n = 3; // Columns of matrix A and rows of matrix B
    int p = 3; // Columns of matrix B

    matrixmult((int *)A, (int *)B, (int *)C, m, n, p);

     printf("Matrix A:\n");
    matrixprt((int *)A, m, n);
 
   printf("Matrix B:\n");
    matrixprt((int *)B, n, p);
 
  printf("Multiplication of following 2 matrix is :\n");
     matrixprt((int *)C, m, p);

    return 0;
}

