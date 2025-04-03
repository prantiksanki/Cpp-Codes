#include<stdio.h>
int main ()
{
	int i,j,k,l;
	for (i=0;i<=5;i++)
	{
		for (j=5;j>=i;j--){
			printf ("%d",j);
		} for (k=0;k<=2*i-1;k++)
		{
			printf ("space");
		} for (l=5;l>=0;l--)
		{
			printf ("%d",l);
		}
	}
	return 0 ;
}
