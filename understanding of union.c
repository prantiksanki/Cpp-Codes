#include <stdio.h>

union MyUnion            //If we use structure then the result is same.
{
    int integer;
    float floating;
};

int main() 
{
    union MyUnion data;                //If we use structure then the result is same.

    data.integer = 42;
    printf("Integer: %d\n", data.integer);

    data.floating = 3.14;
    printf("Floating point: %f\n", data.floating);

    return 0;
}

