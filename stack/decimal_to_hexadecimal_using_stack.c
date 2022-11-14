#include <stdio.h>
#include <stdlib.h>
void decimalToHexa(int num)
{
    long  remainder, quotient;
    int i = 1, j, temp;
    char hexadecimalNumber[100];

    quotient = num;
    while (quotient != 0)
    {
        temp = quotient % 16;
        // for  convert integer into character
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexadecimalNumber[i++] = temp;
        quotient = quotient / 16;
    }
    printf("Equivalent hexadecimal value of decimal number %d: ", num);
    for (j = i - 1; j > 0; j--)
        printf("%c", hexadecimalNumber[j]);
    return 0;
}
int main()
{

    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    decimalToHexa(num);
    return 0;
}
