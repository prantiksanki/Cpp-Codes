#include<stdio.h>
int main() {
    char vote;
    char cand;
    int a,b,c,d,e; 
    a=0;b=0;c=0;d=0;e=0;


    do {
        printf("Do you wish to vote (y/n) : ");
        scanf(" %c", &vote); 
        if (vote == 'y') {  
            printf("Vote among the 5 candidates (A B C D E) : ");
            scanf(" %c", &cand);
                 switch (cand) {
                case 'A':
                    a++;
                    break;
                case 'B':
                    b++;
                break;
                case 'C':
                    c++;
                    break;
                case 'D':
                    d++;
                 break;
                case 'E':
                    e++;
                    break;
                default:
                    printf("Invalid input.\n");
            }
        }
    } while (vote == 'y');  


    printf("a=%d \tb=%d \tc=%d \td=%d \te=%d ",a,b,c,d,e);
    if (a>b && a>c && a>d && a>e) {
        printf("Candidate A won with %d votes.\n",a);
    } else if (b>a && b>c && b>d && b>e) {
        printf("Candidate B won with %d votes.\n",b);
    } else if (c>a && c>b && c>d && c>e) {
        printf("Candidate C won with %d votes.\n",c);
    } else if (d>a && d>b && d>c && d>e) {
        printf("Candidate D won with %d votes.\n",d);
    } else if (e>a && e>b && e>c && e>d) {
        printf("Candidate E won with %d votes.\n",e);
    }


    return 0;
}

