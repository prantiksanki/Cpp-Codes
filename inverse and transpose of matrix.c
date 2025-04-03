#include <stdio.h>

#define N 3 

void transpose(int mat[N][N], int trans[N][N]) 

{
	int i ,j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            trans[i][j] = mat[j][i];
        }
    }
}

void printMatrix(int mat[N][N]) 

{
	int i ,j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int inverse(int mat[N][N], int inv[N][N]) {

    int i ,j ;
    int aug[N][2 * N];
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            aug[i][j] = mat[i][j];
            aug[i][j + N] = (i == j) ? 1 : 0;
        }
    }

    for ( i = 0; i < N; i++) 
	{
		int i , j ,k ;
        for ( j = 0; j < N; j++) {
            if (i != j) {
                double ratio = aug[j][i] / (double)aug[i][i];
                for ( k = 0; k < 2 * N; k++) {
                    aug[j][k] -= ratio * aug[i][k];
                }
            }
        }
    }

    

    for ( i = 0; i < N; i++) {
        double divisor = aug[i][i];
        if (divisor == 0) {
        
            return 0;
        }
        for ( j = 0; j < 2 * N; j++) {
            inv[i][j] = aug[i][j] / divisor;
        }
    }

    return 1;
}

int main() {
    int mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[N][N];
    int inv[N][N];

    printf("Original Matrix:\n");
    printMatrix(mat);

    transpose(mat, trans);

    printf("\nTranspose Matrix:\n");
    printMatrix(trans);

    if (inverse(mat, inv)) {
        printf("\nInverse Matrix:\n");
        printMatrix(inv);
    } else {
        printf("\nMatrix is singular, inverse doesn't exist.\n");
    }

    return 0;
}

