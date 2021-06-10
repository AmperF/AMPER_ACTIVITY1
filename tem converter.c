#include<stdio.h>

int main()

{
    char select_original,select_converted;
    float value,f,c,k;

    printf("Input original temperature value: ");
    scanf("%f",&value);
    printf("Select original temperature scale: ");
    scanf(" %c",&select_original);

    if(select_original=='f')
    {
        printf("Select converted temperature scale: ");
        scanf(" %c",&select_converted);
        if(select_converted=='c')
        {
            c=((value-32)*5)/9;
            printf("\n%.0f F = %.2f C",value,c);
        }
        else if(select_converted=='k')
        {
            k=(((value-32)*5)/9)+273.15;
            printf("\n%.0f F = %.2f K",value,k);
        }
    }
    else if(select_original=='c')
    {
        printf("Select converted temperature scale: ");
        scanf(" %c",&select_converted);
        if(select_converted=='f')
        {
            f=(value*9/5)+32;
            printf("\n%.0f C = %.2f F",value,f);
        }
        else if(select_converted=='k')
        {
            k=value+273.15;
            printf("\n%f C = %.2f K",value,k);
        }
    }
    else if(select_original=='k')
    {
        printf("Select converted temperature scale: ");
        scanf(" %c",&select_converted);
        if(select_converted=='f')
        {
            f=(((value-273.15)*9)/5)+32;
            printf("\n%.0f K = %.2f F",value,f);
        }
        else if(select_converted=='c')
        {
            c=value-273.15;
            printf("\n%.0f K = %.2f C",value,c);
        }
    }

    return 0;
}
