#include <stdio.h>
void italy();           //FUNCTION DECLARATION
void brazil();         //FUNCTION DECLARATION
void argentina ();    //FUNCTION DECLARATION
int main ()
{
	printf ("I am in main.\n");
	italy();           // FUNCTION CALL
	brazil();         //FUNCTION CALL
	argentina ();    // FUNCTION CALL
	return 0;
	
}  
void italy()         //FUNCTION DEFINATION
{
	printf ("I am in Italy\n");
} 
void brazil ()      //FUNCTION DEFINATION
{
	printf ("I am in Brazil\n");
} 
void argentina ()     //FUNCTION DEFINATION
{
	printf ("I am in Argentina\n");
}
