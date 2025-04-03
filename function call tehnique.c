#include <stdio.h> 
void fun()
{
	printf ("Hello World") ;
}

int main ()
{
	void (*ptr) () = fun ;
	ptr() ;
}
