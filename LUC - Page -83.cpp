#include<stdio.h>
int main ()
{
	int hr,paid ,ovtm,i;
	i=1;
	while (i<=10)
	{
		printf ("\nEnter the overtime houre : ");
		scanf("%d",&hr);
		if (hr>40){
			ovtm=hr-40;
			paid=ovtm*120;
		} else {
	        paid = 0;
	        ovtm=0;
		} 
		printf ("\nOvertime houre =%d",ovtm);
		printf ("\nOvertime fees = %d",paid);
	}
	return 0;
}
