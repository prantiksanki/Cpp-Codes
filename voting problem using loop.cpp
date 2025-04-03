#include<stdio.h>
int main ()
{
	int a,b,c,d,e;
	float y,n;
	float vote;
	char selection,cand;
	do 
	{
		printf ("Enter if you want to give vote : ");
		scanf("%c",&selection);
		if (selection =y){
	printf ("Choose the candidate (a/b/c/d/e) : ");
	scanf("%d",&vote);
	a=0;b=0;c=0;d=0;e=0;
		switch (cand){
			case 'A':
				a++;
				break;
				case 'B':
				b++ ;
				break;
				case 'C':
					c++;
					break;
					case 'D':
						d++;
						break ;
						case 'E':
						e++ ;
						break;
						default :
						printf ("Invalid Input"); 
						
		} 
	} 
}
	while (selection==y);
	printf ("Vote for a=%d \tVote for b=%d \tVote for c=%d \tVote for d=%d \tVote for e=%d",a,b,c,d,e);
	if (a>b && a>c && a>d && a>e){
		printf ("a is winner with %d vote",a);
	} else if (b>a && b>c && b>d && b>e){
		printf ("b is winner with %d vote ",b);
	} else if (c>a && c>b && c>d && c>e){
		printf ("c is winner with %d vote",c);
	} else if (d>a && d>b && d>c && d>e){
		printf ("d is winner with %d vote",d);
		}else if (e>a && e>b && e>c && e>d){
			printf ("e is winner with %d vote",e);
			}else {
				printf ("Not clear");
			}
	return 0 ;
}
