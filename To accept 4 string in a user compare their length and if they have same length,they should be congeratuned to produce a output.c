#include <stdio.h>
#include <string.h>
int main ()
{
	int str1[100],str2[100], str3[100] , str4[100] , str5[100] ;
	int i;
	printf ("Enter the statement-1 : ");
	gets(str1);
	printf ("Enter the statement-2 : ");
	gets(str2);
		printf ("Enter the statement-3 : ");
	gets(str3);
		printf ("Enter the statement-4 : ");
	gets(str4);
		printf ("Enter the statement-5 : ");
	gets(str5);
	int p= strlen(str1);
	printf ("String : %s\n",str1);
	printf ("Length : %d\n",p);
	int q= strlen (str2);
	printf ("String : %s\n",str2);
	printf ("Length : %d\n",q);
	int r = strlen (str3);
	printf ("String : %s\n",str3);
	printf ("Length : %d\n",r);
	int s = strlen (str4);
	printf ("String : %s\n",str4);
	printf ("Length : %d\n",s);
	int t=strlen(str5);
	printf ("String : %s\n",str5);
	printf ("Length : %d\n",t);
	if (p==q)
	{
		printf ("\nThe two equal length statements are : %s %s",str1,str2);
	} else if (q==r)
	{
		printf ("\nThe two equal length statements are : %s %s ",str2,str3);
	} else if (r==s)
	{
		printf ("\nThe two equal length statements are : %s %s",str3,str4);
	} else if(s==t) 
	{
		printf ("\nThe two equal length statements are : %s %s",str4,str5);
	} else if (t==p)
	{
		printf ("\nThe two equal length statements are : %s %s",str5,str1);
	} else 	{
		printf ("       ");
	} 
	return 0;
	
}
