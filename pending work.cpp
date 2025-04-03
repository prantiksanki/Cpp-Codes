#include<stdio.h>
int main ()
{
	int i,j,k;
	for (i=4;i>0;i--)  //4>0
	{
		for (j=4;j<=i&&j>1;j--)     //4=4
		{
			printf (" ");
		} printf ("\n");
		for (k=1;k<=i&&k>0;k++)   //1<4
		{
			printf ("*");
		}
	}
	printf ("\n");
	return 0;
}
