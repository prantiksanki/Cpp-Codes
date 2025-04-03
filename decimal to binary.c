 #include <stdio.h>

int main() {
    int decimal;

    printf("Enter the Decimal No: ");
    scanf("%d", &decimal);

     int binary[32];
        int i = 0 , j;

        while (decimal > 0)
		 {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }

        printf("Binary Form: ");

        for ( j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    
    return 0;
    
}

