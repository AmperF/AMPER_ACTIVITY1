#include<stdio.h>

int main ()
{
 int grade;

 printf("Input grade: ");
 scanf("%d", &grade);

    if (grade >= 92 && grade <=100)
        printf("Your grade equivalent is A");
       else if  (grade >= 84 && grade <=91)
        printf("Your grade equivalent is A-");
        else if(grade >= 76 && grade <=83)
        printf("Your grade equivalent is B");
        else if(grade >= 68 && grade <=75)
        printf("Your grade equivalent is B-");
       else if(grade >= 60 && grade <=67)
        printf("Your grade equivalent is C");
       else if (grade >= 50 && grade <=59)
        printf("Your grade equivalent is D");
        else if ( grade >= 50 && grade <=1)
        printf("Your grade equivalent is F");

    else
    printf("Invalid Grade:");

    return 0;
    }
