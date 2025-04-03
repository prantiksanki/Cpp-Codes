#include <stdio.h>

struct emp 
{
	char name[20] ;
	int age ;
};

int main ()
{
	struct emp a = { "UPES", 20 };
	fun(a) ;
}

void fun (struct emp b)
{
	printf ("\n %s %d",b.name , b.age) ;
}
