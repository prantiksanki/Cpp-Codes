#include <stdio.h>

// Declare the struct before the main function
struct book {
    int pages;
    char name[50];
};

// Declare the function prototype before main
int display(struct book b);

int main() {
    struct book b1;

    printf("Enter the no of pages: ");
    scanf("%d", &b1.pages);

    printf("Enter the name of this book: ");
    scanf("%s", b1.name);

    // Call the display function to print the book details
    display(b1);

    return 0;
}

// Define the display function after main
int display(struct book b) {
    printf("%d %s", b.pages, b.name);

    return 0;
}

