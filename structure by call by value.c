#include <stdio.h>

    struct book {
        char name[50];
        char author[50];
    };
    struct book b1 ;

int main()
 {


    struct book b1;

    printf("Enter the name and author of this book: ");
    scanf("%s %s", b1.name, b1.author);
    display(&b1);

 }

void display(struct book *b) {
    printf("Name of the book: %s\n", b->name);
    printf("Name of the author of this book: %s\n", b->author);
}

