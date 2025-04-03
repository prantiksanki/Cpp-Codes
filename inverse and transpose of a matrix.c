#include <stdio.h>

int main() {
    // Define the matrix
    gsl_matrix *A = gsl_matrix_alloc(3, 3);
    gsl_matrix *inverse = gsl_matrix_alloc(3, 3);

    gsl_matrix_set(A, 0, 0, 2.0);
    gsl_matrix_set(A, 0, 1, 1.0);
    gsl_matrix_set(A, 0, 2, 1.0);
    gsl_matrix_set(A, 1, 0, 1.0);
    gsl_matrix_set(A, 1, 1, 3.0);
    gsl_matrix_set(A, 1, 2, 2.0);
    gsl_matrix_set(A, 2, 0, 1.0);
    gsl_matrix_set(A, 2, 1, 0.0);
    gsl_matrix_set(A, 2, 2, 0.0);

    int s;

    gsl_permutation *p = gsl_permutation_alloc(3);
    gsl_linalg_LU_decomp(A, p, &s);
    gsl_linalg_LU_invert(A, p, inverse);

    printf("Inverse of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f ", gsl_matrix_get(inverse, i, j));
        }
        printf("\n");
    }

    gsl_matrix_free(A);
    gsl_matrix_free(inverse);
    gsl_permutation_free(p);

    return 0;
}

