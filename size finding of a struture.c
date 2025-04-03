#include <stdio.h>

typedef struct MyStruct
 {
    int member1;
    float member2;
    char member3;
}memb;

int main() {
   // struct MyStruct myVariable;

//	int size = sizeof(myVariable);
    
    memb ;
    int size =  sizeof (memb);
    printf("Size of MyStruct: %d bytes\n", size);

    return 0;
}

