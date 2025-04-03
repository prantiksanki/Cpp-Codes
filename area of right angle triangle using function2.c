//"int triangle_area(int base, int height)" returns the area of the right-angled triangle to main().

#include <stdio.h>

int triangle_area(int base, int height);

int main() {
    int base, height;
    printf("Enter the value of base: ");
    scanf("%d", &base);
    printf("Enter the value of height: ");
    scanf("%d", &height);
    int h = triangle_area(base, height);
    printf("The area of the right-angled triangle is: %d", h);
}

int triangle_area(int base, int height) {
    int a;
    a = (base * height) / 2;
    return a;
}
