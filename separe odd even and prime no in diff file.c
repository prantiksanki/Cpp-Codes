#include <stdio.h>
#include <math.h>

int main() {
    FILE *inputFile, *evenFile, *oddFile, *primeFile;
    inputFile = fopen ("input_numbers.txt", "w+");
    int arr[20] ;
    printf ("Enter 20 nos : ");
    fgets(arr , sizeof(arr) , stdin) ;
    fputs (arr , inputFile) ;
    
	fclose(inputFile);
	
    inputFile = fopen("input_numbers.txt", "r");

    evenFile = fopen("even_numbers.txt", "w");
    oddFile = fopen("odd_numbers.txt", "w");
    primeFile = fopen("prime_numbers.txt", "w");

    int num ,i;
    while (fscanf(inputFile, "%d", &num) == 1) {
         if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }

         int isPrime = 1;
        if (num < 2) {
            isPrime = 0;   
        } else {
            for ( i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = 0;   
                    break;
                }
            }
        }

        if (isPrime) {
            fprintf(primeFile, "%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);
    fclose(primeFile);

    printf("Numbers categorized and written to files successfully.\n");

    return 0;
}

