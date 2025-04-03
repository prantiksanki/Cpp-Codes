#include <stdio.h>

union studentrec {
    char name[50];
    int roll;
    int math ;
    int c ;
    int lc;
    int linux ;
    int ps ;
    int env ;
  
};


int main()
 {
    int n ,i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    union studentrec stud[n];

    for ( i = 0; i < n; i++)
	 {
        printf("\nEnter the details of student %d:\n", i + 1);

        printf("Enter the name of student: ");
        scanf("%s", stud[i].name);

        printf("Enter the roll no : ");
        scanf("%d", &stud[i].roll);

        printf("Enter no in math : ");
        scanf("%d", &stud[i].math);
        
        printf("Enter no in c language  : ");
        scanf("%d", &stud[i].c);
        printf("Enter no in Living Conversation  : ");
        scanf("%d", &stud[i].lc);
        printf("Enter no in linux  : ");
        scanf("%d", &stud[i].linux);
        printf("Enter no in Problem Solving  : ");
        scanf("%d", &stud[i].ps);
        printf("Enter no in Environment  : ");
        scanf("%d", &stud[i].env);
    
    }
    printf ("\n\n\n");

    for (i = 0; i < n; i++)
	 {
        printf("The details of student %d:\n", i + 1);
        printf("Name: %s\n", stud[i].name);
        printf("Roll No : %d\n", stud[i].roll);
        printf("Math: %d\n", stud[i].math);
        printf("C Language: %d\n", stud[i].math);
        printf("Living Conversation: %d\n", stud[i].math);
        printf("Linux: %d\n", stud[i].math);
        printf("Problem Solving: %d\n", stud[i].math);
        printf("Environment Sustainability : %d\n", stud[i].math);
        printf ("\n\n\n") ;
        
    }

    return 0;
}

