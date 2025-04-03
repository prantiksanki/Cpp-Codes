// Design a structure 'product' to store the details of the product purchased like product name, price per unit, 
//number of quantities purchased, and amount spent. Get the name, price per unit, and number of quantities of the product purchased.
//Calculate the amount spent on the product and then display all the details of the procured product using structure pointers.

#include <stdio.h>
struct product
{
	char name[50] ;
	float price ;
    int	quant ;
    float tamn ;
    
};
struct product prod1 , prod2 , prod3 ; 
int main ()
{


	printf ("\nEnter name , price and quantity of products : ");
	scanf ("%s %f %d",&prod1.name ,&prod1.price , &prod1.quant);
	scanf ("%s %f %d",&prod2.name ,&prod2.price , &prod2.quant);
	scanf ("%s %f %d",&prod3.name ,&prod3.price , &prod3.quant);
	prod1.tamn = prod1.price * prod1.quant ;
		prod2.tamn = prod2.price * prod2.quant ;
			prod3.tamn = prod3.price * prod3.quant ;
	
	
	
	printf ("It is , what you entered name , price , quantity , total ammount : ");
	printf ("\n%s %f %d %f" , prod1.name , prod1.price , prod1.quant , prod1.tamn);
	printf ("\n%s %f %d %f" , prod2.name , prod2.price , prod2.quant , prod2.tamn);
	printf ("\n%s %f %d %f" , prod3.name , prod3.price , prod3.quant , prod3.tamn);
}
