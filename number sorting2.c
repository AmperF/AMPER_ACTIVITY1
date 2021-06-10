#include<stdio.h>

int main ()
{
    int number[10], i, j, temp;

    for(i=0;i<10;i++)
    {
        do
        {
            printf("[%d] Input number: ", i+1);
            scanf("%d", &number[i]);
            if(number[i]<0)
        {
    printf("This is an invalid input. Try again.\n");
            }
        }while(number[i]<0);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(number[j]<number[j+1])
            {
        temp = number[j];
        number[j] = number[j+1];
        number[j+1] = temp;
            }
        }
    }
    printf("\nSorted list: ");
    for(i=0;i<10;i++)
    {
        printf("%d,", number[i]);
    }

    printf("\b.");

    return 0;
}
