#include <stdio.h>
# include <string.h>
int main( )
{
     enum emp_dept
    {
    assembly, manufacturing, accounts, stores
    } ;
struct employee
{
char name[ 30 ] ;
int age ;
float bs ;
enum emp_dept department ;
} ;
struct employee e ;
strcpy ( e.name, " Ajay" ) ;
e.age = 32 ;
e.bs = 5000 ;
e.department = manufacturing ;

printf ( "Name = %s\n", e.name ) ;
printf ( "Age = %d\n", e.age ) ;
printf ( "Basic salary = %f\n", e.bs ) ;
printf ( "Dept = %d\n", e.department ) ;
}

