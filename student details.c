//name, SAP ID, enrollment number, date of registration and data of birth. 
//The element date of joining is defined using another structure 'date' to store date details like day, month, and year

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct studentrec {
    char name[50];
    int sap;
    int enrollno;
    struct date date_reg;
    struct date date_birth;
    struct date date_join;
};


int main()
 {
    int n ,i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct studentrec stud[n];

    for ( i = 0; i < n; i++) {
        printf("\nEnter the details of student %d:\n", i + 1);

        printf("Enter the name of student: ");
        scanf("%s", stud[i].name);

        printf("Enter the sap id: ");
        scanf("%d", &stud[i].sap);

        printf("Enter enrollment number: ");
        scanf("%d", &stud[i].enrollno);

        printf("Enter the date of registration : ");
        scanf("%d %d %d", &stud[i].date_reg.day, &stud[i].date_reg.month, &stud[i].date_reg.year);

        printf("Enter the date of birth : ");
        scanf("%d %d %d", &stud[i].date_birth.day, &stud[i].date_birth.month, &stud[i].date_birth.year);

        printf("Enter the date of joining : ");
        scanf("%d %d %d", &stud[i].date_join.day, &stud[i].date_join.month, &stud[i].date_join.year);
    }

    for (i = 0; i < n; i++) {
        printf("The details of student %d:\n", i + 1);
        printf("Name: %s\n", stud[i].name);
        printf("Sap Id: %d\n", stud[i].sap);
        printf("Enrollment No: %d\n", stud[i].enrollno);
        printf("Date of registration: %d/%d/%d\n", stud[i].date_reg.day, stud[i].date_reg.month, stud[i].date_reg.year);
        printf("Date of Birth: %d/%d/%d\n", stud[i].date_birth.day, stud[i].date_birth.month, stud[i].date_birth.year);
        printf("Date of joining: %d/%d/%d\n", stud[i].date_join.day, stud[i].date_join.month, stud[i].date_join.year);
    }

    return 0;
}

