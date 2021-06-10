#include<stdio.h>

int main ()

{
    int number[10], i, max=0, min;

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
        if(max<number[i])
        {
            max=number[i];
        }
    }

    min=max;

    for(i=0;i<10;i++)
    {
       if(min>number[i])
       {
           min=number[i];
       }
    }

    printf("\nMin: %d\nMax: %d", min, max);

    return 0;
}

