#include <stdio.h>
#include <stdlib.h>

 struct subject
{
    char subject_name[50];
    int subject_code;
};

int main() {
    int n , i;

     printf("Enter the number of subjects: ");
    scanf("%d", &n);

     struct subject *subjects = (struct subject *)malloc(n * sizeof(struct subject));

     for (i = 0; i < n; ++i) {
        printf("Enter details for subject %d:\n", i + 1);

         printf("Subject Name: ");
        scanf("%s", subjects[i].subject_name);

         printf("Subject Code: ");
        scanf("%d", &subjects[i].subject_code);
    }

     printf("\nSubject Details:\n");
    for ( i = 0; i < n; ++i) {
        printf("Subject %d:\n", i + 1);
        printf("Name: %s\n", subjects[i].subject_name);
        printf("Code: %d\n", subjects[i].subject_code);
        printf("\n");
    }

     free(subjects);

    return 0;
}



