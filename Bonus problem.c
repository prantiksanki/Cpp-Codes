/*The current year and the year in which the employee joined the organization are entered through the keyboard. If the number of years for which the employee has served 
the organization is greater than 3 then a bonus of Rs. 2500/- is given to the employee.If the years of service are not greater than 3, then the program should do nothing.*/ 
 

#include<stdio.h>
int main ()
{
	int jyr , cyr ,yoexp ;
	printf ("Enter the current year : ");
	scanf ("%d",&cyr);
	int i ;
	for (i=1 ; i<=10 ; i++)
	{
		printf ("\nEnter the joining year :  ");
		scanf ("%d",&jyr);
		yoexp = cyr - jyr ;
		if (yoexp >=3 )
		{
			printf ("\tBonus will be 2500/-");
		} 
		else {
			printf ("\tThere is no bonus");
		}
	}
	return 0;
}
