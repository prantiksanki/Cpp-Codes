//	Find the total number of alphabets, digits or special characters in a string

#include <stdio.h>
int main ()
{
	char str[100] ,i;
	int digit = 0 ;
	int alphabet =0  ;
	int specialchar = 0 ;
	
	printf ("Enter a statement : ");
	gets (str);
	
	for (i=0 ; str[i] != '\0' ; i++)
	{
		int ch = str [i] ;
		if ((ch>= 'A' && ch<= 'Z') || (ch>= 'a' && ch<= 'z'))
		{
			alphabet ++ ;
			
		}
		else if (ch >='0' && ch <='9' )
		{
			digit ++ ;
		}
		else 
		{
			specialchar ++ ;
		} 
		
	}
	printf ("\nThe no of alphabets is : %d ",alphabet);
	printf ("\nThe no of digits is : %d",digit);
	printf ("\nThe no of specialchar : %d",specialchar);
	
	return 0 ;
	
}
