#include <stdio.h>
int main ()
{
	int id  ;
	float salary ;
	char name[20];
	FILE *ptr ;
	ptr = fopen ("employ_details.txt" , "w+");
	
	printf ("Enter the Name of the employ :  ");
	scanf ("%s",name);
	fprintf(ptr, "Name= %s\n",name);      
	
	printf ("Enter Id no :  ");
	scanf ("%d",&id);
	fprintf(ptr, "Id= %d\n", id);      
	
	printf ("Enter the salary :  ");
	scanf ("%f",&salary);
	fprintf(ptr, "Salary = %f\n", salary);    
	
	fclose(ptr);
//.........................................	

    char line[100]; 

    ptr = fopen("employ_details.txt", "r");

    printf("Employee Details:\n");

    while (fgets(line, sizeof(line), ptr) != NULL)
	 {
        printf("%s", line);
    }

    fclose(ptr);

    return 0;
}


