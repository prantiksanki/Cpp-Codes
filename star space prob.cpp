#include<stdio.h>
int main ()
{
	int i,j,k;
	for (i=4;i>0;i--)  //i=4,i=3
	{
		for (j=4;j>i;j--)  //4=4,3=3,
		{
			printf ("*");
		} printf ("\n");
		for (k=1;k<i;k++)   //1<4,2<4,3<4
		{
			printf (" ");
		}
	} 
	printf ("\n");
}
