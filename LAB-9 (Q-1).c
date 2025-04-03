#include <stdio.h>


struct Product {
    char name[50];
    float ppu;
    int quantity;
    float amt;
};


void amountSpent(struct Product *p) {
    p->amt = p->ppu * p->quantity;
}

int main() {
    
    struct Product prod;


    printf("Enter the product name: ");
    scanf("%s", prod.name);

    printf("Enter the price per unit: ");
    scanf("%f", &prod.ppu);

    printf("Enter the quantity purchased: ");
    scanf("%d", &prod.quantity);


    amountSpent(&prod);
    
    printf("\nProduct Details:\n");
    printf("Name: %s\n", prod.name);
    printf("Price per unit: %f\n", prod.ppu);
    printf("Quantity purchased: %d\n", prod.quantity);
    printf("Amount spent: %f\n", prod.amt);

    return 0;
}

