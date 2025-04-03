#include <stdio.h>

union product {
    char name[50];
    float price_per_unit;
    int quantity_purchased;
    float amount_spent;
};

int main() {
    union product prod;

    printf("Enter the product name: ");
    scanf("%s", prod.name);

    printf("Enter the price per unit: ");
    scanf("%f", &prod.price_per_unit);

    printf("Enter the number of quantities purchased: ");
    scanf("%d", &prod.quantity_purchased);

    prod.amount_spent = prod.price_per_unit * prod.quantity_purchased;

    printf("Product Details:\n");
    printf("Name: %s\n", prod.name);
    printf("Price per unit: %.2f\n", prod.price_per_unit);
    printf("Quantity purchased: %d\n", prod.quantity_purchased);
    printf("Amount spent: %.2f\n", prod.amount_spent);

    return 0;
}

