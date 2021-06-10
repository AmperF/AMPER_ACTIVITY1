#include <stdio.h>

int main()
{
    char hexa[10];
    int select, i, j,
    count_binary=0,
    count_octal,
    count_hexa, decimal, binary[10], bin, octal, oct, hex;


    printf("Enter Decimal Integer: ");
    scanf("%d",&decimal);

    //convert user name to binary
    for(j=decimal;j>=1;j/=2)
    {
        bin = j%2;
        binary[count_binary]=bin;
        count_binary++;
    }
    printf("Binary: ");
    for(j=count_binary-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }

    //convert user name to octal
    count_octal=-1;
    for(j=0;j<=100;j++)
    {
        if(decimal>=(int)pow(8,j))
        {
            count_octal++;
        }
        else
        {
            break;
        }

    }
    printf("\nOctal: ");
    octal = decimal/(int)pow(8,count_octal);
    for(int j = count_octal;j>=0;j--)
    {
        printf("%d",octal);
        oct = decimal%(int)pow(8,j);
        if(j>0)
        {
            octal = oct/(int)pow(8,j-1);
        }

    }
    //convert user name to Hexadecimal
    count_hexa=0;
    for(int j = decimal;j>=1;j/=16)
	{
	    hex =  j%16;

	    if(hex<=9)
	    {
	        hexa[count_hexa] =(char)(hex+'0');
	    }
	    else if(hex==10)
	    {
	        hexa[count_hexa] = 'A';
	    }
	    else if(hex==11)
	    {
	        hexa[count_hexa] = 'B';
	    }
	    else if(hex==12)
	    {
	        hexa[count_hexa] = 'C';
	    }
	    else if(hex==13)
	    {
	        hexa[count_hexa] = 'D';
	    }
	    else if(hex==14)
	    {
	        hexa[count_hexa] = 'E';
	    }
	    else if(hex==15)
	    {
	        hexa[count_hexa] = 'F';
	    }
	    count_hexa++;
	}
    printf("\nHexadecimal: ");
	for(int j = count_hexa-1;j>=0;j--)
	{
	   printf("%c",hexa[j]);
	}

    return 0;
}
