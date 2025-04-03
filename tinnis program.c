// Tinni's Program ..

/*
WAP to read all content of students.txt and display records only those student who 
scored more than 80 marks .
roll no , name , marks 
*/



#include <stdio.h>
#include <stdlib.h>


// create a structure to store all the data which is inside the text file 
struct Student 

{
    int rollNo;
    char name[50];
    int marks;
};

int main()

 {
 	struct Student student ;   // structure declaration in main function 
 	
 	// open this pre saved text file using fopen() function 
 	
    FILE *file = fopen("C:/Users/Prantik sanki/Downloads/students.txt" , "r");
    char str[100] ;
    
    printf ("::::::::::::::: CONTENT INSIDE THIS TEXT FILE ::::::::::::::::::::") ;
    
    // print the content of this file 
    while (fgets (str , 100 , file) != NULL)
    {
    	
    	
    	printf ("%s" , str) ;
	}
	
	// reset cursor at the begining of the file 
	
  fseek(file, 0, SEEK_SET); 


     // Main part of this program 
     
    printf("Records of students who scored more than 80 marks:\n");
                 printf("Roll No      Name       Marks\n");

    while (fscanf(file, "%d           %s          %d", &student.rollNo, student.name, &student.marks) != EOF)   // Scan the content from this file 
	
	 {
        if (student.marks >= 80) // marks condition given in the question 
		
		{
            printf("%d     %s     %d\n", student.rollNo, student.name, student.marks);
        }
    }

    fclose(file);   // finally close the file 

    return 0;
}

