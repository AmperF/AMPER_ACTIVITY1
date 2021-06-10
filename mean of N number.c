#include<stdio.h>


int main()
{
    int input, total = 0, sum = 0, mean = 0;
    do
    {
            printf("Enter number: ");
            scanf("%d", &input);
    sum += input;
    if(input!=0)
        total++;
    }
        while(input !=0);
        mean = sum/total;


    printf("\nTotal numbers entered: %d\nSum: %d\nMean: %d", total, sum, mean);
    return 0;
}
